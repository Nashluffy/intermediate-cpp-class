//Inheritance
// Date: March 11 & 13, 2019

#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person(): name{"no name"}, age{-1} {}
        Person(string name, int age): name{name}, age{age} {}
        string getName() const {return name;}
        void setName(string name) {name = name;}
        int getAge() const {return age;}
        void setAge(int age) {age = age;}
        string dailyAction() {return "Sleep";}
        virtual string whoamI() {return name + " " + to_string(age);}
};

class Student : public Person { //Student inherits from Person
    private: 
        int id;
    public: 
        Student() : Person(), id{-1} {}; //
        Student(string name, int age, int id) : Person{name,age}, id{id} {}
        int getId() const {return id;}
        void setId(int id) {id = id;}
        string dailyAction() {return "Study and sleep";} //Overrides the base class method
        virtual string whoamI() {return getName() + " " + to_string(getAge()) + " " + to_string(id);}
};

void identify1(Person p);
void identify2(Person *p);


int main(){
    Person neighbor{"Alice", 30};
    identify1(neighbor);
    Student compEstudent{"Bob", 19, 8001}; 
    identify1(compEstudent); //This will point to the superclass whoamI() 
    identify2(&neighbor); //Polymorphism!
    identify2(&compEstudent); //Polymorphism!
    Student* eeStudent = new Student{"Carol", 21, 8002};
    identify2(eeStudent);
}

void identify1(Person p) //Derived classes are sliced!
{
    cout << p.whoamI() << endl;
}

void identify2(Person* p) {     //Polymorphism with dynamic binding of whoamI()
    cout << p->whoamI() << endl;
}