#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
public:
    int rollNo;

    void getStudentData() {
        getDetails(); // Call base class method
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void showStudentData() {
        showDetails(); // Call base class method
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.getStudentData();
    cout << "\nStudent Info:\n";
    s.showStudentData();
    return 0;

}
