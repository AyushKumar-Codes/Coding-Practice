#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string w;
    cin>>w;
    string sub;
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==w[0]){
            sub=s.substr(i,w.length());
            if(sub==w){
                c++;
            }
            }
        }
        cout<<c<<endl;
        string sn="";
        bool isword=false;
    
        for(int i=0;i<s.length();i++){
            sn+=s[i];
            if(s[i]==w[0]){
                sub=s.substr(i,w.length());
                if(sub==w){
                    isword=true;
                }
                }
            if(isword && (s[i]=='.'||s[i]=='!'||s[i]=='?')){
                cout<<sn<<" ";
                sn="";
                isword=false;
            }
            else if(s[i]=='.'||s[i]=='!'||s[i]=='?'){
                sn="";
                isword=false;
            }
        }
            return 0 ;
        }
