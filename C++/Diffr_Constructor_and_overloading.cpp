#include <iostream>

using namespace std;
class construct
{
    public:
    float area;
    construct() //non parameterized contructor
    {
        area=0;
    }
    construct(int a,int b)//parametrized constructor
    {
        area=a*b;
    }
    void disp()
    {
        cout<<area<<endl;
    }
};
int main()
{
  construct o;
  construct o2(10,20);
  o.disp();
  o2.disp();
  construct o3(o2);//o3=o2; coping a obj to another this called Copy constructor
  o3.disp();
  

    return 0;
}