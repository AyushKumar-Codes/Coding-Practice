#include<iostream>
using namespace std;
int main(){
    int n, l,r;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int l=0;l<n;l++){
        r=n;
    for(int r=n;r>l;r--){
        int sum = 0;
        for(int i=l;i<r;i++){
            sum+=arr[i];
        }
    cout<<sum<<endl;
    }
    }
}

// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n,q;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter The Number of Queries";
//     cin>>q;
//     int l[q],r[q];
//     cout<<"Enter Ranges : l R";
//     for(int i=0;i<q;i++){
//         cin>>l[i]>>r[i];
//     }
    
//     for(int i =0 ;i <q ; i++){
//         int sum=0;
//         for(int  j= l[i] ; j<r[i];j++){
//             sum+=arr[j];
//         }
//         cout<<sum;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n , l ,r ;
//     cin>>n;
//     int arr[n];
//     for(int i =0 ;i<n;i++){
//         cin>>arr[i];
//     }
//     int p ,q ,r ;
//     cout<<"Enter value of P Q R";
//     cin>>p>>q>>r;
//     int i=0,k,j;
//     for(int j = n-1;j>=0;j--);
//     for(int k = i+1; k>=i ; k++  )

// }

#include<iostream>
using namespace std;
int main(){
    // int n, l,r;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int k;
    // cin>>k;
    // int total = 0;
    // for(int l=0;l<n;l++){
    //     r=n;
    
    // for(int r=n;r>l;r--){
    //     int sum = 0;
    //     for(int i=l;i<r;i++){
    //         sum+=arr[i];
    //     }
    //     if(sum==k){
    //         total++;
    //     }
    // }
    // }
    // cout<<total;
}