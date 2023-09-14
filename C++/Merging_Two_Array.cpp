#include<iostream>
using namespace std;
int main(){
int n1;
int n2;
cout<<"Enter the Size for 1st Array: ";
cin>>n1;
cout<<"Enter the Size for 2nd Array: ";
cin>>n2;
int arr1[n1];
int arr2[n2];
int n3=n1+n2;
int arr3[n3];
cout<<"Enter Elements in 1st Array: "<<endl;
for(int i =0 ;i <n1;++i){
cin>>arr1[i];
}
cout<<"Enter Elements in 2nd Array: "<<endl;
for(int i =0 ;i <n2;++i){
cin>>arr2[i];
}
cout<<"Merged Array : "<<endl;
int c=0,d=0;
for(int i =0 ;i <n3;++i){
if (i<n1){
    arr3[i]=arr1[c];
c++;
}
else{
    arr3[i]=arr2[d];
    d++;
}
}
for(int i =0 ;i <n3;++i){
cout<<arr3[i]<<endl;
}

}