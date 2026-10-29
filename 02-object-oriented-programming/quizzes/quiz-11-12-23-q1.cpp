#include <iostream>
using namespace std;

class Rectangle {
private:
    double* length;
    double* width;

public:
    // Default constructor
    Rectangle() {
        length = new double(0);
        width = new double(0);
    }

    // Constructor with parameters
    Rectangle(double len, double wid) {
        length = new double(len);
        width = new double(wid);
    }

    // Copy constructor for deep copy
    Rectangle(const Rectangle &source) {
        length = new double(*(source.length));
        width = new double(*(source.width));
    }

    // Destructor
    ~Rectangle() {
        delete length;
        delete width;
    }

    double area() const {
        return (*length) * (*width);
    }

    double perimeter() const {
        return 2 * ((*length) + (*width));
    }
};

int main() {
    double len, wid;

    cout << "Enter the length of the rectangle: ";
    cin >> len;
    cout << "Enter the width of the rectangle: ";
    cin >> wid;

    Rectangle myRectangle(len, wid);

    Rectangle copyOfRectangle(myRectangle);

    cout << "Area of Original Rectangle: " << myRectangle.area() << endl;
    cout << "Perimeter of Original Rectangle: " << myRectangle.perimeter() << endl;

    return 0;
}

/*000000000 
Emir behiç saglam*/
