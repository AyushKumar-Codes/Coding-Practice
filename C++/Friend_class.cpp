#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

class Calculator; 

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    friend class Calculator;
};

class Calculator {
public:
    static double area(Triangle triangle) {
        double s = (triangle.side1 + triangle.side2 + triangle.side3) / 2;
        return sqrt(s * (s - triangle.side1) * (s - triangle.side2) * (s - triangle.side3));
    }

    static double perimeter(Triangle triangle) {
        return triangle.side1 + triangle.side2 + triangle.side3;
    }

    static double longestSide(Triangle triangle) {
        return max({triangle.side1, triangle.side2, triangle.side3});
    }

    static double smallestSide(Triangle triangle) {
        return min({triangle.side1, triangle.side2, triangle.side3});
    }
};

int main() {
    Triangle myTriangle(3.0, 4.0, 5.0);

    cout << "Area: " << Calculator::area(myTriangle) << endl;
    cout << "Perimeter: " << Calculator::perimeter(myTriangle) << endl;
    cout << "Longest Side: " << Calculator::longestSide(myTriangle) << endl;
    cout << "Smallest Side: " << Calculator::smallestSide(myTriangle) << endl;

    return 0;
}