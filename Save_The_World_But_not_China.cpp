#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int arr[200];
        for(int i=l; i<=r; i++){
            arr[s[i]]++;
        }
    }
    return 0;
}