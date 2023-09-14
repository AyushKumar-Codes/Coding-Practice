//Inserting a number in first position and shift others
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of Array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0 ;i < n;i++){
//         cout<<"\n Enter element "<< (1+i) << " :";
//         cin >>arr[i] ;
//     }
//     cout<<"Array Elements: \n";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     for(int i=n-1;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     //inserting number at index zero
     
//     cout<<"Enter the number to insert ";
//     cin>>arr[0];
//     cout<<"Array after insertions: \n";
//     for(int i=0 ;i < n;++i){
//         cout<<arr[i]<<endl;
//     }
// }

//Insertion of new element at the last and shifting of other elements to left
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Size of array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0 ;i < n; ++i ){
//         cout<< "\n Enter Element "<< (1 + i)<<": ";
//         cin >>arr[i];
//     }
//     cout <<"Elements are:\n" ;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     /* inserting an element at end */
//     for(int i=0;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     cout<<"Enter the element to insert at Last: ";
//     cin>>arr[n-1];
//     cout<<"After insertion\n";
//     for(int j=0;j<n;j++){
//         cout<<arr[j]<<endl;
//     }
// }

//Insertion of new element at nth position
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Size of array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0 ;i < n; ++i ){
//         cout<< "\n Enter Element "<< (1 + i)<<": ";
//         cin >>arr[i];
//     }
//     cout <<"Elements are:\n" ;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     int pos;
//     cout<<"Enter the position to add element: ";
//     cin>>pos;
//     /* inserting an element at nth position */
//     for(int i=n-1;i>pos-1;i--){
//         arr[i]=arr[i-1];
//     }
//     cout<<"Enter the element to add";
//     cin>>arr[pos-1];
//     cout<<"After insertion\n";
//     for(int j=0;j<n;j++){
//         cout<<arr[j]<<endl;
//     }
// }