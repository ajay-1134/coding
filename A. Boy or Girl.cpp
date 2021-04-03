#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    string s;
    cin>>s;
    int arr[200]={0};
    int n = s.length();
    for(int i=0; i<n; i++){
        arr[s[i]]++;
    }
    int num=0;
    for(int i=0; i<200; i++){
        if(arr[i] !=0 ) num++;
    }
    if(num%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}