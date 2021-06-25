#include<bits/stdc++.h>
#define lol long long 
using namespace std;


int gcd(int a,int b){
    int n = min(a,b);
    for(int i=n; i>=1; i--){
        if(a%i == 0 && b%i == 0) return i;
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],o=0,e=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0)e++;
            else o++;
        }
        int odd[o];
        o=0;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                odd[o]=a[i];
                o++;
            }
        }
        long long ans=(e*(e-1))/2;
        // cout<<ans<<" ";
        ans+=(e*o);
        // cout<<ans<<" ";
        // sort(odd,odd+o);
        for(int i=0;i<o;i++){
            for(int j=i+1;j<o;j++){
                if(gcd(odd[i],odd[j]) > 1)ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}