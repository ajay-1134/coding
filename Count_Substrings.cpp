#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                cnt++;
            }
        }

        cout<<(cnt*(cnt+1))/2<<endl;
    }
    return 0;
}