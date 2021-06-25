#include<bits/stdc++.h>
using namespace std;
#define int long long int

int sum(int n){
    return n*(n+1)/2;
}

signed main(){
    int n;
    cin>>n;
    int flag = 0, i=1;
    while(flag == 0){
        if(sum(i) >= n){
            flag = 1;
            break;
        }
        i++;
    }
    cout<<i<<endl;
}