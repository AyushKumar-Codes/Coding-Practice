#include <iostream>

using namespace std;
int fact(int n)
{
    if(n<0)
    return -1;
    if(n==0)
    return (1);
    else
    return (n*fact(n-1));
}
int main()
{
        
    int val,fac;
    cout<<"enter the number";
    cin>>val;
    fac=fact(val);
    cout<<fac;

    return 0;
}