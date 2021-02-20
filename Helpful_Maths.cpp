#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    string s;
    cin>>s;
    int n = s.length();
    int k = ((n+1)/2);
    int arr[k];
    int m=0;
    for(int i=0; i<n; i =i+2){
        arr[m] = s[i];
        m++;
    }
    sort(arr , arr+k);
    int arr1[n];
    int j=0;
    for(int i=0; i<n; i+=2){
        arr1[i] = arr[j];
        arr1[i+1] = 0;
        j++;
    }
    for(int i=0; i<n; i+=2){
        s[i] = arr1[i];
    }
    cout<<s<<endl;
    return 0;
}