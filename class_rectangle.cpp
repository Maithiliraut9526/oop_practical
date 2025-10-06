#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double breadth;

public:
    Rectangle(double l, double b) {           //in bracket the values are given is default constuctor
        length = l;
        breadth = b;
        cout << "Rectangle is created " << endl;
    }
    double area() {
        return length * breadth;
    }
    double perimeter() {
        return 2 * (length + breadth);
    }
    ~Rectangle() {                         //distructor
        cout << "Destructor " << endl;
    }
};



int main() {
Rectangle rect(10.1,11.2);
cout << "Area of rectangle is : " << rect.area() << endl;
cout << "perimeter of rectangle is : " << rect.perimeter() << endl;

return 0;
}
