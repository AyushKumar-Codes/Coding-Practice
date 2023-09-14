#include<iostream>
using namespace std;
int main(){
string replaceWords;
    string s,r,w;
    getline(cin,s);
    getline(cin,r);
    getline(cin,w);
    string sn;
    for(int i=0;i<s.length();i++){
    A:
        int c=0;
        if(s[i]==r[0]){
            for(int j=0;j<r.length();j++){
                if(s[i+j]==r[j]){
                    c++;
                }
            }
            if(c==r.length()){
                for(int q=0;q<w.length();q++){
                    sn.push_back(w[q]);
                }
                i+=r.length();
                goto A;
            }
        }
        sn.push_back(s[i]);
    }
    cout<<sn;
}