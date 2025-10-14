#include<iostream>
using namespace std;

class Grandparents {
    public:
        void showGrandparents() {
            cout << "I am Grandparent" << endl;
        }
};

class Parent : public Grandparents{
    public:
        void showParent(){
            cout<<"i am a Parent class" << endl;
        }
};

class Child : public Parent {
    public:
        void showChild(){
            cout << "I am a child ";
        }
};

int main() {
    Child c;
    c.showGrandparents();
    c.showParent();
    c.showChild();

    return 0; 
}