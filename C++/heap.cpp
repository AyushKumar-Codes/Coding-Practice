// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// //Min heap
// int main(){
//     int n;
//     cin>>n;
//     vector <int> v;
//     int x;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         v.push_back(x);
//     }
//     make_heap(v.begin(),v.end(),greater<int>());
//     for(int w:v){
//         cout<<w<<" ";
//     }
//     return 0;
// }

//Insertion in Max heap 
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     int x;
//     vector <int> v;
// while(cin>>x){
//     v.push_back(x);
//     make_heap(v.begin(),v.end());
// }
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     return 0;
// }

//Deletion in Heap
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector <int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     make_heap(v.begin(),v.end());
//     pop_heap(v.begin(),v.end());
//     v.pop_back();
    
//     for(int i:v){
//         cout<<i<<" ";
//     }
    
//     return 0;
// }

//Heapify Function
#include<iostream>
#include<vector>
using namespace std;

void maxheap(vector<int>& v,int n,int i){
    int larg=i;
    int right=2*i+2;
    int left=2*i+1;
    if(left<n && v[left]>v[larg]){
        larg=left;
    }
    if(right<n && v[right]>v[larg]){
        larg=right;
    }
    if(larg!=i){
        swap(v[i],v[larg]);
        maxheap(v,n,larg);
    }
}

void minheap(vector<int>& v,int n,int i){
    int larg=i;
    int right=2*i+2;
    int left=2*i+1;
    if(left<n && v[left]<v[larg]){
        larg=left;
    }
    if(right<n && v[right]<v[larg]){
        larg=right;
    }
    if(larg!=i){
        swap(v[i],v[larg]);
        minheap(v,n,larg);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=(n/2)-1;i>=0;i--){
        maxheap(v,n,i);
    }
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=(n/2)-1;i>=0;i--){
        minheap(v,n,i);
    }

    for(int i:v){
        cout<<i<<" ";
    }

    return 0;
}
