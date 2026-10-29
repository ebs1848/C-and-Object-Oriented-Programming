#include <iostream>
#include <cmath>

using namespace std;

double const PI = 3.1415;

class Triangle {

private:
    double* sideA;
    double* sideB;
    double* angleA;
    double* angleB;
    double* sideC;
    double* angleC;

public:
    Triangle(double a, double b, double angleA, double angleB) {
        sideA = new double(a);
        sideB = new double(b);
        this->angleA = new double(angleA);
        this->angleB = new double(angleB);
        sideC = new double(0.0); 
        angleC = new double(0.0); 
    }
	
	

	
	Triangle(const Triangle& other): 
    	sideA(new double(*other.sideA)), sideB(new double(*other.sideB)),
	  	angleA(new double(*other.angleA)), angleB(new double(*other.angleB)),
      	sideC(new double(*other.sideC)), angleC(new double(*other.angleC));
	  
	
	Triangle() {
        delete sideA;
        delete sideB;
        delete angleA;
        delete angleB;
        delete sideC;
        delete angleC;
    }

    void calculateThirdSide() {
        double angleA_radians = degreesToRadians(*angleA);
        *sideC = sqrt(*sideA * *sideA + *sideB * *sideB - 2 * *sideA * *sideB * cos(angleA_radians));
    }

    void calculateThirdAngle() {
        *angleC = 180.0 - (*angleA + *angleB);
    }

    double degreesToRadians(double degrees) {
        return (degrees * PI / 180.0);
    }

    double getSideA() { return *sideA; }
    double getSideB() { return *sideB; }
    double getAngleA() { return *angleA; }
    double getAngleB() { return *angleB; }
    double getThirdSide() { return *sideC; }
    double getThirdAngle() { return *angleC; }
};

int main() {
    double sideA, sideB, angleA, angleB;

    cout << "Please enter values for two sides (A and B) and two angles (A and B):" << endl;
    cout << "Side A: ";
    cin >> sideA;
    cout << "Side B: ";
    cin >> sideB;
    cout << "Angle A (in degrees): ";
    cin >> angleA;
    cout << "Angle B (in degrees): ";
    cin >> angleB;

    Triangle myTriangle(sideA, sideB, angleA, angleB);

    myTriangle.calculateThirdSide();
    myTriangle.calculateThirdAngle();

    cout << "The third side (C) is: " << myTriangle.getThirdSide() << " units" << endl;
    cout << "The third angle (C) is: " << myTriangle.getThirdAngle() << " degrees" << endl;

    return 0;
}

