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
    for(int i=0;i<n-1;i++){
    int min_ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_ind]>arr[j]){
                min_ind=j;
            }
        }
        if(min_ind!=i){
                temp=arr[i];
                arr[i]=arr[min_ind];
                arr[min_ind]=temp;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}


