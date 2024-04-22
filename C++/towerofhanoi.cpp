#include<iostream>
#include<cmath>
using namespace std;
void towerhanoi(int n,char source ,char helper,char destination){
    if (n==1) {
        cout<<"Move Disk 1 from "<<source<<" to "<<destination<<endl;
        return ;
    }
    towerhanoi(n-1,source,destination,helper);
    cout<<"Move Disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    towerhanoi(n-1,helper,source,destination);
}

int main(){
    int n;
    cout<<"Enter the number of disk: ";
    cin>>n;
    cout<<"Total number of moves: "<<pow(2,n)-1<<endl;
    towerhanoi(n,'A','B','C');
    return 0;

}