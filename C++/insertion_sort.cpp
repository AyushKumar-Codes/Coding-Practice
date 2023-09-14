#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp;
    for(int i=1;i<n;i++){
        int j=i;
        while(j!=0){
        if(arr[j]<arr[j-1]){
           temp=arr[j];
           arr[j]=arr[j-1];
           arr[j-1]=temp;
        }
        else{break;}
        j--;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}