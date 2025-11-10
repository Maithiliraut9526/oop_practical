#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);

    cout << "Area of Circle: " << circle.area() << endl;
    cout << "Area of Rectangle: " << rectangle.area() << endl;

    return 0;
}