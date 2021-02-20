#include<bits/stdc++.h>
using namespace std;
int main(){
int x1,v1,x2,v2;
cin>>x1>>v1>>x2>>v2;
if(v1 < v2){
    cout<<"NO"<<endl;
}
else{
int cnt = 0;    
for(int i=1; i<10001; i++){
    if((x1 + i*v1) == (x2 + i*v2)){
       cnt = cnt + 1;}
}
    if(cnt > 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
} 
 return 0;   }   
