#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     int minEatingSpeed(vector<int>& piles,int h) {
        long long int n= piles.size();
        long long int max_value = *max_element(piles.begin(),piles.end());
    
        long long int ans = max_value;
        long long int low = 1;
        long long int high = max_value;
        long long int sum =0;

        while(low<=high){
            long long int mid = (low+high)/2;
            long long int sum = 0;
            for(auto i:piles){
                sum+=(i+mid-1)/mid;
            }
            if(sum<=h){
                ans = min(ans,mid);
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
    return (int)ans;
    
    }
};

int main(){
    cout<<"No. Piles = ";
    int n ;
    cin>>n;
    vector<int> piles(n) ;
    for(int i =0 ;i<n ;i++ ){
        cin>>piles[i];
    }
    int h ;
    cin>>h;
    Solution Sol;
    cout<<Sol.minEatingSpeed(piles,h);
}