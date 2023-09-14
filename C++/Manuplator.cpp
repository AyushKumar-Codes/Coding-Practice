#include <iostream>
#include <iomanip>
#include <istream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    istringstream str("            programmer");
    string line;
    getline(str >> ws, line);
    cout << line << endl;
    
    int num = 123;
    double val = 3.14159;
    cout << "number: " << num << endl;
    cout << "value : " << setprecision(4) << val << endl;
    cout << setw(10) << left << "left" << setw(10) << right << "right" << endl;
    int a = 151;
    cout << setfill('*') << setw(8) << a << endl;
    cout << "hex value= " << hex << num << endl;
    cout << "set base value=" << setbase(8) << num << endl;
    return 0;
}
