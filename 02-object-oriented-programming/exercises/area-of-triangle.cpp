#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
	
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculateArea() const {
 		double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double calculatePerimeter() const {
        return side1 + side2 + side3;
    }

    void printInfo() const {
        cout << "Triangle Information:\n";
        cout << "Area: " << calculateArea() << "\n";
        cout << "Perimeter: " << calculatePerimeter() << "\n";
    }
};

int main() {
    
    double side1, side2, side3;
    cout << "Enter the length of side 1: ";
    cin >> side1;
    cout << "Enter the length of side 2: ";
    cin >> side2;
    cout << "Enter the length of side 3: ";
    cin >> side3;

    Triangle triangle(side1, side2, side3);

    triangle.printInfo();

    return 0;
}

