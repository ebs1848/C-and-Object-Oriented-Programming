#include<iostream>
#include<cmath>
using namespace std;

class Triangle
{
private:
    int *side1, *side2;
    float third_side_result;
    int *angle1, *angle2, third_angle_result;

public:
    Triangle(int *input_side1, int *input_side2, int *input_angle1, int *input_angle2) : side1(input_side1), side2(input_side2), angle1(input_angle1), angle2(input_angle2) {}
    
    Triangle(const Triangle &source) {
        side1 = new int(*source.side1);
        side2 = new int(*source.side2);
        angle1 = new int(*source.angle1);
        angle2 = new int(*source.angle2);
    }

    Triangle(){
        cout << "a normal call" << endl;
    }

    int* third_angle(){
        third_angle_result = 180 - (*angle1 + *angle2);
        int *result = new int(third_angle_result);
        return result;
    }

    float* third_side(){
        third_side_result = sqrt(pow(*side1, 2) + pow(*side2, 2) - (2 * (*side1 * *side2) * cos(third_angle_result)));
        float *result = new float(third_side_result);
        return result;
    } 

    void print(){
        cout << "The third angle of the Triangle: " << *third_angle() << endl;
        cout << "The third side of the Triangle: " << *third_side() << endl;
    }

    ~Triangle (){
        delete side1;   delete side2;   delete angle1;  delete angle2;
        delete third_angle();   delete third_side();
    }
};

class A {
    static Triangle a;
    public:
    A(){
        cout << "A has been called!!";
    }
};

Triangle A::a;

int main(){
    int *side1 = new int;
    int *side2 = new int;
    int *angle1 = new int;
    int *angle2 = new int;

    cout << "Input two sides and two angles:" << endl;
    cout << "Side 1: ";  cin >> *side1;
    cout << "Side 2: ";  cin >> *side2;
    cout << "Angle 1: ";  cin >> *angle1;
    cout << "Angle 2: ";  cin >> *angle2;

    Triangle tri1(side1, side2, angle1, angle2);

    tri1.print();

    cout << "the next output is for tir2 (the second object): " << endl;
    Triangle tri2(tri1);

    tri2.print();
    A a;
    return 0;
}