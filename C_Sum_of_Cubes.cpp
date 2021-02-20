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
        int arr[10005];
        for(int i=1; i<10005; i++){
            arr[i-1] = i*i*i;
        }
        int j=0;
        int flag = 0;
        for(int i=0; i<10005; i++){
            int sum = arr[i];
            if(sum > n){
                break;
            }
            for(int j=0; j<10005; j++){
                if(sum += arr[j] == n){
                    flag = 1;
                    break;
                }
                else if(sum > n){
                    break;
                }
            }

        }
        if(flag == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}