#include<iostream>
using namespace std;

class Library{
    public:
        void book() {
            cout<<"Books in liabrary"<<endl;   
        }        
};

class Mathematics : public Library {
    public:
        void formulas(){
            cout<<"Maths book"<< endl;
            cout << "This book includes the maths formulas"<< endl;
        }
};

class Ooc : public Library {
    public:
        void programs(){
            cout<<"OOC book"<< endl;
            cout << "This book includes OOC programs"<< endl;
        }
};

int main() {
    Mathematics m;
    Ooc o;
    m.book();
    m.formulas();
    o.book();
    o.programs();

    return 0;
}