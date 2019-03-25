/* 
3/25/2019 Class Notes & Output - Containers
*/

/*
Container is a data structure

type ele : data structure 
Above is a Range-based for-loop 

You can ignore type by using auto instead of type
auto ele : data structure

Linked list has the same methods as vector 
list<string> exampleList;

List has an iterator that can be declared by 
list<string>::iterator iter; 

Pair is sort of a data structure
Can make a pair of string and int, or whatever  you want

Map container is a hash table
hashTable.emplace(key,value)
Example:
    statePopulation.emplace("MA", 543433);
    statePopulation.emplace("NC", 23423);
    statePopulation.emplace("AZ", 34990913);

    cout << "Population of AZ: " << statePopulation.at("AZ") << endl;
    statePopulation.at("AZ") = 34990914; //Population grew by one!
Map is used to put things away and get things back really quick


*/