#include<iostream>
using namespace std;
class Matrix{
    int** arr;
    int n;
    public:
    Matrix(int no):n(no){
        arr = new int*[n];
        for(int i=0;i<n;i++){
                arr[i] = new int[n];
        }
    }
    void read(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
    }
    int get(int i , int j){
        return arr[i][j];
    }
    
};
int main(){
    int n;
    cin>>n;
    Matrix m(n);
    m.read();
    Matrix m1(n);
    m1.read();
    cout<<"The product of the two matrices is:"<<endl;
    for(int i=0;i<n;i++){
        int c=0;
        while(c<n){
        int sum=0;
        for(int j=0;j<n;j++){
            sum += m.get(i,j)*m1.get(j,c);
        }
        cout<<sum<<" ";
        c++;
        }
        cout<<endl;
    }
    return 0;
}