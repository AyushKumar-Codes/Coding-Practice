// #include<iostream>
// #include<cmath>
// using namespace std;
// const int n = 1e5+10;
// int main(){
//     long long fact[n+1];
//     fact[0] = fact[1] = 1;
//     for(int i=2;i<=n;i++){
//         fact[i] = fact[i-1] * i;
//     }
//     cout<<fact[100];

//     cout<<ceil((double)2/(double)3);

// }


//Finding whether a number is a power of 2 or not , For Constraint -31<n<31

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    cout<< "Enter a number : ";
    int n;
    cin>>n;
    if(n<=0) {
        cout<<"False";
        return 0;
    };
    vector<long long int> tp;
    for(int i=0;i<31;i++){
        tp.push_back(pow(2,i));
    }
        int ind = log2(n);
        if(tp[ind]==n){
            cout<<"True";
        }
        else{
        cout<<"False";
        }
        return 0;
        
}