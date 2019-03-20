/* Game with 4 different types of creatures: humans, cyberdemons, balrogs, 
and elves. We will be simulating a match between them */
/* Rules */
/* 1 - Every creature inflicts damage that is a random number r, where 0 < 
r <= strength */
/* 2 - Balrogs, and Cyberdemons have a 5% chance of inflicting a demonic 
attack, which is an additional 50 damage points */
/* 3 - Elves have a 10% chance to inflict a magical attack that doubles 
the normal amount of damange */
#include <thread>
#include <chrono>
#include <string>
#include <iostream>

using namespace std;

class Creature {    
    protected:
        string description;
        int strength; // How much maximum damage can the creature inflict
        int hitpoints; // How much damage can it sustain before dying
        int damagesustained; // Records the damage sustained by the creature. Starts out with zero. Creature dies when damagesustained >= hitpoints
    public:
        string getDescription() {return description;}
        int getDamagesustained() {return damagesustained;}
        int setDamagesustained(int d)  {damagesustained = d;}
        virtual int attack()=0; // Creature attacks. Each dervied class will implement the appropriate attack
};
// To do - Code up Humans, Cyberdemons, Balrogs, and Elves classes all derived from Creature class with appropriate attack() methods
// You can put all the code in this one file for this assignment.

class Humans : public Creature {
    public:
        virtual int attack();
        
};

class Cyberdemons : public Creature {

};

class Balrogs : public Creature {

};

class Elves : public Creature{ 

};

string match(Creature* c1, Creature* c2);

int main() {
    Humans* hum = new Humans("human", 100, 100, 0); // Description, strength, hitpoints
    Cyberdemons* cyb = new Cyberdemons("cyberdemon", 200, 100, 0);
    Balrogs* bal = new Balrogs("balrog", 50, 200, 0);
    Elves* elv = new Elves("elves", 200, 200, 0);
    cout << "And the winner between humans and cyberdemons is..." << 
    match(hum, cyb) << endl;
    cout << "And the winner between balrogs and elves is..." << match(bal, 
    elv) << endl;
    cout << "And the winner between cyberdemons and balrogs is..." << 
    match(cyb, bal) << endl;
    return 0;
}
string match(Creature* c1, Creature* c2){
    // Round 1
    c1->setDamagesustained(c2->attack());
    c2->setDamagesustained(c1->attack());
    std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Sleep for a second
    // Round 2
    c1->setDamagesustained(c2->attack());
    c2->setDamagesustained(c1->attack());
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    // Round 3
    c1->setDamagesustained(c2->attack());
    c2->setDamagesustained(c1->attack());
    // Winner!
    if (c1->getDamagesustained() <= c2->getDamagesustained()){
        return c1->getDescription();
    }
    else{
        return c2->getDescription();
    }
}