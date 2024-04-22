#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int nexty(int in,vector<string> s){
    for(int i=in+1;i<s.size();i++){
        if(s[i]=="Yes"){
            return i;
        }
    }
    return -1;
}
int nextn(int in,vector<string> s){
    for(int i=in+1;i<s.size();i++){
        if(s[i]=="No"){
            return i;
        }
    }
    return -1;
}
bool exp(string s , vector<string>var,vector<int> val){
    int a,b;
    for(int i=0;i<var.size();i++){
        if(s[0]==var[i][0]){
            a=val[i];
        }
        else if(s[s.size()-1]==var[i][0]){
            b=val[i];
        }
    }
    if(s[1]=='>'){
        return (a>b);
    }
    else if(s[1]=='<'){
        return (a<b);
    }
    else if(s[1]=='='){
        return (a==b);
    }
    else{
        return (a!=b);
    }
}
void printx(string s,vector<string> var,vector<int>val){
    for(int i=0;i<var.size();i++){
        if(s[0]==var[i][0]){
            cout<<val[i]<<endl;
        }
    }
}
int main(){
    vector<string> s;
    int t;
    vector<string> var;
    vector<int> val;
    string s1=""; 
    A:
    while(s1!="si"){
    cin>>s1;
    s.push_back(s1);
    }
    cin>>s1;
    if(s1=="is" || s1=="No"){
        s.push_back(s1);
        goto A;
    }
    else{
        var.push_back(s1);
    string line;
    getline(cin,line);
    stringstream ss(line);
    string s1;

    // Tokenize and store words in the vector
    while (ss >> s1) {
        var.push_back(s1);
    }
        for (int i=0;i<var.size();i++){
            cin>>t;
            val.push_back(t);
        }
        
        
    }
    

    int iy=0,y,n;
    B:
    if ((y = nexty(iy,s)) != -1){
        if(exp(s[y - 1], var, val)){
            if(s[y+1]=="print"){
                printx(s[y+2],var,val);
                iy=y+2;
            }
        }
        else if((n = nextn(iy,s)) != -1){
            if(s[n+1]=="print"){
                printx(s[n+2],var,val);
                iy=n+2;
            }
        }
        goto B;
    }

    return 0;
}
