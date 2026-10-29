#include <iostream>
using namespace std;

class Quadrilateral {
private:
    double* sides;

public:
    // Constructor with individual sides
    Quadrilateral(double s1, double s2, double s3, double s4) {
        sides = new double[4]{s1, s2, s3, s4};
    }

    // Deep copy constructor
    Quadrilateral(const Quadrilateral &source) {
        sides = new double[4];
        for (int i = 0; i < 4; ++i) {
            sides[i] = source.sides[i];
        }
    }

    // Destructor
    ~Quadrilateral() {
        delete[] sides;
    }

    bool isSquare() {
        for (int i = 1; i < 4; ++i) {
            if (sides[0] != sides[i]) {
                return false;
            }
        }
        return true;
    }
    
    bool isRectangle() {
        return (sides[0] == sides[2] && sides[1] == sides[3]) ||
               (sides[0] == sides[1] && sides[2] == sides[3]) ||
               (sides[0] == sides[3] && sides[1] == sides[2]);
    }
};

int main() {
    double side1, side2, side3, side4;
    char continueInput = 'y';

    while (continueInput == 'y') {
       
        cout << "Enter the four sides of the shape: ";
        cin >> side1 >> side2 >> side3 >> side4;

        Quadrilateral myShape(side1, side2, side3, side4);

        if (myShape.isSquare()) {
            cout << "The shape is a square." << endl;
        } else if (myShape.isRectangle()) {
            cout << "The shape is a rectangle." << endl;
        } else {
            cout << "The shape is not a square or a rectangle." << endl;
        }

        cout << "Do you want to enter another shape? (y/n): ";
        cin >> continueInput;
    }

    return 0;
}

