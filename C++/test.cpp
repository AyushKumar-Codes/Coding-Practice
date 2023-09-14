#include <iostream>
using namespace std;

int* getPointer() {
    int num = 10;
    return &num;
}
int main() {
    int* ptr = getPointer();
    cout << *ptr;
    return 0;
}