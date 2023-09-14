// #include <iostream>

// using namespace std;
// class Complex{
//     private:
//     int real;
//     int imag;
//     public:
//     Complex(int r=0,int i=0)
//     {
//         real=r;
//         imag=i;
//     }
//     Complex operator+(Complex const& obj)//Without "operator+" this 2 obj cant be added this makes addition operation valid 
//     // we can do operator overloading for all the operators except :: & * typeid sizeof
//     {
//         Complex res;
//         res.real=real+obj.real;
//         res.imag=imag+obj.imag;
//         return res;
//     }
//     void print()
//     {
//         cout<<real<<" +i"<<imag<<endl;
//     }
    
// };
// int main()
// {
//     Complex c1(10,5),c2(2,4);
//     Complex c3=c1+c2;
//     c3.print();

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
class Person
{
    private:
    string name;
    int age;
    public:
    Person(const string& n,int a)
    {
        name=n;
        age=a;
    }
    friend ostream& operator<<(ostream& os,const Person& p)
    {
        os<<"name :"<<p.name<<" Age :"<<p.age;
        return os;
    }
};
int main()
{
    Person p1("Alice",30);
    Person p2("bob",25);
    cout<<p1<<endl;
    cout<<p2<<endl;

    return 0;
}