#include<iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"Animals can eat"<<endl;
    }    
};

class Dog : public Animal{
public:
    void bark(){
        cout<<"Dogs can bark"<<endl;
    }    
};

class Cat : public Animal{
public:
    void meow(){
        cout<<"Cat meow"<<endl;;
    }    
};

int main()
{
    Dog d;
    Cat c;

    d.eat();
    d.bark();

    c.eat();
    c.meow();

    return 0;
}