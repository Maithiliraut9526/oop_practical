#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
    void display() {
        cout << "The complex number is: " << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};

int main() {
    float r, i;
    cout << "Enter real part: ";
    cin >> r;
    cout << "Enter imaginary part: ";
    cin >> i;

    Complex c(r, i);
    c.display();

    return 0;
}