#include<bits/stdc++.h>
using namespace std;
int main(){
int s,t;
cin>>s>>t;
int a,b;
cin>>a>>b;
int m,n;
cin>>m>>n;
int arr1[m],arr2[n];
for(int i=0; i<m; i++){
    cin>>arr1[i];
}
for(int i=0; i<n; i++){
    cin>>arr2[i];
}
 int k1 = 0;
for(int i=0; i<m; i++){
    if(s <= (a + arr1[i]) and (a + arr1[i]) <= t){
        k1 = k1 + 1;
    }
    else {
    k1 = k1;}
}
cout<<k1<<endl;
int k2 = 0;
for(int i=0; i<n; i++){
    if(s <= (b + arr2[i]) and (b + arr2[i]) <= t){
        k2 = k2 + 1;
    }
    else{
    k2 = k2;}
}
cout<<k2<<endl;
    return 0;
}