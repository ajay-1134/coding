#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
int arr[a-1];
for(int i=0; i<(a-1); i++){
    cin>>arr[i];
}
int sum=0;
for(int i=0; i<(a-1); i++){
    sum=sum+arr[i];
}
int k;
if(((a*c)-sum)>b){
    cout<<"-1"<<endl;}
else if(((a*c)-sum)<=0){
    cout<<"0"<<endl;
}  
else{
    cout<<((a*c)-sum)<<endl;
}

    return 0;
}