#include<bits/stdc++.h>
using namespace std;
#define int long long int

int power(int j){
    int res = 1;
    for(int i = 1; i <= j; i++){
        res = res * 2;
    }
    return res;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int cnt[32];
        for(int i = 0; i < 32; i++){
            cnt[i] = 0;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < 32; j++){
                if(arr[i]  & power(j)){
                    cnt[j]++;
                }
            }
        }

        int sum = 0;
        for(int i = 0; i < 32; i++){
            sum += cnt[i]/k;
            if(cnt[i]%k != 0){
                sum++;
            }
        }

        cout << sum << endl;
    }
}