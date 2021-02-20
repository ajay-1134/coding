#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    int n,k;
    cin>>n>>k;
    double alc = 0;
    int res, flag;
    int arr1[n],arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i]>>arr2[i];
        alc = alc + ( arr1[i] * arr2[i] )/100.0;
        if(alc > (double)k){
            flag = 1;
            res = i+1;
            break;
        }
    }
    if(flag == 1){
        cout<<res<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}