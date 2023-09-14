#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    string w="";
    double sum=0;
    double c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
          sum+=w.length();
          w="";
          c++;
        }
        else{
            w.push_back(s[i]);
        }
    }
    sum+=w.length();
    c++;
    cout<<fixed<<setprecision(3)<<sum/c;
return 0;
}

