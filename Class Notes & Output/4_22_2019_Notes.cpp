//Linked List implementation
#include <iostream>
#include <string>

using namespace std;

class Node{
    public:
        Node(string s, Node* n);
        string data;
        Node* next;
};

Node::Node(string s, Node* n){
    data = s;
    next = n;
};

class LinkedList{
    public:
        Node* head;
        LinkedList();
        bool insert(string s);
};

LinkedList::LinkedList() : head(nullptr) {};

bool LinkedList::insert(string s){
    //First have to create a Node
    Node* n = new Node(s,head);
    head = n;

};

ostream& operator<<(LinkedList l, ostream& os){
    Node* n = l.head;
    while(n != nullptr){
        os << n->data << " ";
        n = n->next;
    }
};

int main(){
    LinkedList poets;
    poets.insert("Wordsworth");
    poets.insert("Shelley");
    poets.insert("Byron");
    //cout << poets << endl;
    
}