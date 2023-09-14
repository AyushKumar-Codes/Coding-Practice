#include<iostream>
using namespace std;
union let{
    char v;
};
class LetterAnalyzer{
    let l;
    public:
    LetterAnalyzer(char w){
        l.v=w;
    }
    void ch(){
        char a[10]={'a','e','i','o','u','A','E','I','O','U'};
        char b[42]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};
        for(int i=0;i<10;i++){
            if(a[i]==l.v){
                cout<<"vowel";
                return;
            }
        }
        for(int i=0;i<42;i++){
            if(b[i]==l.v){
                cout<<"consonant";
                return ;
            }
        }
        cout<<"Invalid input";
    }
};
int main(){
    char wo;
    cin>>wo;
    LetterAnalyzer la(wo);
    la.ch();
    return 0;
}