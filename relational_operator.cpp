#include<iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    // Overload ==
    bool operator==(const MyClass& other) const {
        return value == other.value;
    }

    // Overload <
    bool operator<(const MyClass& other) const {
        return value < other.value;
    }

    // Overload <=
    bool operator<=(const MyClass& other) const {
        return value <= other.value;
    }

    // Overload >
    bool operator>(const MyClass& other) const {
        return value > other.value;
    }

    // Overload >=
    bool operator>=(const MyClass& other) const {
        return value >= other.value;
    }
};

int main() {
    MyClass obj1(20);
    MyClass obj2(30);

    if (obj1 == obj2) {
        cout << "obj1 is equal to obj2" << endl;
    } else {
        cout << "obj1 is not equal to obj2" << endl;
    }

    if (obj1 < obj2) {
        cout << "obj1 is less than obj2" << endl;
    }

    if (obj1 > obj2) {
        cout << "obj1 is greater than obj2" << endl;
    } else {
        cout << "obj1 is not greater than obj2" << endl;
    }

    if (obj1 >= obj2) {
        cout << "obj1 is greater than or equal to obj2" << endl;
    } else {
        cout << "obj1 is not greater than or equal to obj2" << endl;
    }

    return 0;
}