#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        int k=n/3;
        int a0=0, a1=0, a2=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%3 == 0){
                a0++;
            }
            else if(arr[i]%3 == 1){
                a1++;
            }
            else{
                a2++;
            }
        }
        int cnt=0;
        while(a0 != a1 || a1 != a2 || a0!= a2){
            if(max(a0,max(a1,a2)) == a0 ){
                a0--;
                a1++;
                cnt++;
            }
            else if(max(a0,max(a1,a2)) == a1 ){
                a1--;
                a2++;
                cnt++;
            }
            else{
                a2--;
                a0++;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}