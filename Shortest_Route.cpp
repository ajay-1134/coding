#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char a[n];
        int b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<m; i++){
            cin>>b[i];
        }
        for(int i=0; i<m; i++){
            int ans1,ans2;
            int flag1=0,flag2=0;
            for(int j=(b[i]-1); j>=0; j--){
                if(a[j] == '1'){
                    flag1 = 1;
                    ans1 = (b[i]- 1) - j;
                    break;
                }
            }
            for(int j=b[i]-1; j<n; j++){
                if(a[j] == '2'){
                    flag2 = 1;
                    ans2 = j - (b[i]- 1);
                    break;
                }
            }
            if(flag1 == 0 && flag2 == 0) cout<<"-1"<<" ";
            else if(flag1 == 1 && flag2 == 0) cout<<ans1<<" ";
            else if(flag1==0 && flag2==1) cout<<ans2<<" ";
            else cout<<min(ans1,ans2)<<" ";
        }
        cout<<endl;
    }
}