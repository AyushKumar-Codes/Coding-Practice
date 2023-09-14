#include<iostream>
using namespace std;

class triangle {
    int a, b, c;

public:
    void setSides(int n1, int n2, int n3) {
        a = n1;
        b = n2;
        c = n3;
    }

    friend float perimeter(triangle t);
    friend int highestSide(triangle t);
};

float perimeter(triangle t) {
    return t.a + t.b + t.c; 
}

int highestSide(triangle t) {
    if (t.a >= t.b && t.a >= t.c)
        return t.a;
    else if (t.b >= t.a && t.b >= t.c)
        return t.b;
    else
        return t.c;
}

int main() {
    triangle t1;
    
    t1.setSides(3, 4, 5);
    
    float p = perimeter(t1); 
    
    cout << "Perimeter of the triangle: " << p << endl;
    
    int highest = highestSide(t1);
    cout << "Highest side of the triangle: " << highest << endl;

    return 0;
}