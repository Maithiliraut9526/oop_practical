#include <iostream>
using namespace std;

class Shape {
public:
    const float PI = 3.14;

    // Area of Circle
    float area(float radius) {
        return PI * radius * radius;
    }

    // Area of Rectangle
    int area(int length, int breadth) {
        return length * breadth;
    }

    // Area of Triangle 
    float area(float base, float height) {
        return 0.5 * base * height;
    }

    // Area of Square
    int area(int side) {
        return side * side;
    }
};

int main() {
    Shape s;

    float radius, base, height;
    int length, breadth, side;

    // Circle
    cout << "Enter radius of Circle: ";
    cin >> radius;
    cout << "Area of Circle: " << s.area(radius) << endl;

    // Rectangle
    cout << "Enter length and breadth of Rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << s.area(length, breadth) << endl;

    // Triangle
    cout << "Enter base and height of Triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << s.area(base, height) << endl;

    // Square
    cout << "Enter side of Square: ";
    cin >> side;
    cout << "Area of Square: " << s.area(side) << endl;

    return 0;
}