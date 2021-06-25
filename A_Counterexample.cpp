#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int l,r;
    cin>>l>>r;
    int n = r-l+1;
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i] = l+i;
    }


    if(n<3) cout<<"-1";
    else{
        int flag = 0;
        int p1,p2,p3;
        for(int i=0; i<n; i++){
            p1 = arr[i];
            for(int j=i+1; j<n; j++){
                p2 = arr[j];
                for(int k=j+1; k<n; k++){
                    p3 = arr[k];
                    if(__gcd(p1,p2) == 1 && __gcd(p2,p3) == 1 && __gcd(p1,p3) != 1){
                        cout<<p1<<" "<<p2<<" "<<p3<<endl;
                        return 0;
                    };
                }
            }
        }
        cout<<"-1"<<endl;
    }      
}