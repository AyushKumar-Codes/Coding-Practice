// You are using GCC
#include <iostream>
using namespace std;
int findAndPrintDuplicates(int arr[], int n, int prev) {
    
    int check=0;
    int c=0;
    for(int i=0;i<n;i++){
        check=0;
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
                check++;
            }
        }
        if(check==2){ // imp part of the code
            cout<<arr[i]<<" ";
            c++;
        }
    }
    if(c>0){
        return 0;
    }
    else{
        return -1;
    }
    
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findAndPrintDuplicates(arr, n, -1);

    if (result == -1) {
        cout << "-1";
    }

    return 0;
}
