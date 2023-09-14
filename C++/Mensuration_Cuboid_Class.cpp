#include <iostream>

using namespace std;

class cuboid {
public:
    double length, breadth, height;
    
    double area() { return length * breadth; }
    double perimeter() { return 2 * (length + breadth); }
    double volume() { return length * breadth * height; }
};

int main() {
    cuboid box;
    
    cout << "Enter length, breadth, and height: ";
    cin >> box.length >> box.breadth >> box.height;

    cout << "Area: " << box.area() << endl;
    cout << "Perimeter: " << box.perimeter() << endl;
    cout << "Volume: " << box.volume() << endl;

    return 0;
}
