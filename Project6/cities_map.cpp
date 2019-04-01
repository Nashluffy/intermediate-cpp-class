#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <cmath>

using namespace std;

//Converting degree to radians for use in the Haversine formula
double deg2rad(double convertMe){
    convertMe = convertMe * M_PI/180;
    return convertMe;
}

//Haversine Formula Calculator
double calculateDistance(double phi, double lambda){
    double delta_phi, delta_lambda, charPhi, charLambda, a , c, d, R;
    charPhi = deg2rad(35.2060); //Charlotte Latitude
    charLambda = deg2rad(-80.8290); //Charlotte Longitutde
    phi = deg2rad(phi); //Destination Latitude
    lambda = deg2rad(lambda); //Destination Longitude
    R = 3959.0; //Radius of earth in miles
    delta_phi = phi - charPhi;
    delta_lambda = lambda - charLambda;
    //Next three lines are Haversine formula
    a = pow(sin(delta_phi/2),2) + (cos(phi)*cos(charPhi)*pow(sin(delta_lambda/2),2));
    c = 2*atan2(sqrt(a), sqrt(1-(a)));
    d = R * c;
    return d; //Return the distance from destination to Charlotte
}

//Parse each line from the cities.txt file
pair<double,string> parseLine(string s){ //We're going to store the distance from Charlotte as the key (double) and city, state as the value
    string word, citystate;
    int i = 0;
    double phi, lambda, distance;
    stringstream ss(s);
    pair<double,string> distanceLocPair;
    while(getline(ss, word ,',')){
        if (i == 0){
            citystate = word; //Store the city as the first part of the combined string
            i++;
        }
        else if (i == 1){
            citystate = citystate + ',' + word; //Store the state as the second part of the combined string
            i++;
        }
        else if(i == 2){
            phi = stod(word); //Convert latitude string to double
            i++;
        }
        else if(i == 3){ 
            lambda = stod(word); //Convert longitude string to double
            i++;
        }
    }
    distance = calculateDistance(phi,lambda); //Calculate the distance from destination to Charlotte
    distanceLocPair = make_pair(distance,citystate); //Create pair to return
    return distanceLocPair; //Return the pair
}

//Thankfully, map's are sorted automatically. We just need to print the results!
void printMap(map<double,string> sortedCities){
    ofstream output_file;
    output_file.open("dist_clt.txt");
    for (auto it = sortedCities.begin(); it != sortedCities.end(); it++){   //auto is super nice, really cleans up code when defining an iterator for map's
        output_file << it->second << " " << it->first << endl;

    }
    output_file.close();
}

int main(){
    string line;
    map<double, string> sortedCities;
    ifstream cities; //Create file stream object
    cities.open("cities.txt"); //Open our text file
    while(getline(cities,line)){
        sortedCities.emplace(parseLine(line));
    }
    printMap(sortedCities);
    
}