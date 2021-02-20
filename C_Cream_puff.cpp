#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int n;
cin>>n;
vector<int>arr;
for(int i=1; i<=sqrt(n); i++){
    if(n % i == 0){
        {
            if(n/i == i){
                // cout<<i<<endl;
                arr.push_back(i);
            }
            else{
                arr.push_back(i);
                arr.push_back(n/i);
                // cout<<i<<endl;
                // cout<<n/i<<endl;
            }
        }
        
    }
}
sort(arr.begin(), arr.end());
for(int i=0; i<arr.size(); i++) cout<<arr[i]<<endl;
return 0;
}
