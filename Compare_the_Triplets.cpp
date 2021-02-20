#include<bits/stdc++.h>
using namespace std;
int main(){
int a1,a2,a3;
cin>>a1>>a2>>a3;
int b1,b2,b3;
cin>>b1>>b2>>b3;
int cnt1 = 0, cnt2 = 0;
if(a1 == b1){
    cnt1 = cnt1;
    cnt2 = cnt2;
}
    else{ if(a1 > b1){
    cnt1 = cnt1+1;
    cnt2 = cnt2;
}
    else{
    cnt1 = cnt1;
    cnt2 = cnt2+1 ;
}}
if(a2 == b2){
    cnt1 = cnt1;
    cnt2 = cnt2;
}
   else{ if(a2 > b2){
        cnt1 =cnt1+1 ;
        cnt2 = cnt2;
    }
    else{
        cnt1 = cnt1;
        cnt2 = cnt2 + 1;
    }}
if(a3 == b3){
    cnt1 = cnt1;
    cnt2 = cnt2;
}    

else{if(a3 > b3){
    cnt1 = cnt1+1;
    cnt2 = cnt2;
}
    else{
        cnt1 = cnt1;
        cnt2 = cnt2+1;
    }
}
cout<<cnt1<<" "<<cnt2<<endl;
    return 0;
}