#include<bits/stdc++.h>
using namespace std;
int main(){
long long int a,b;
cin>>a>>b;
if(a == 1){
    cout<<1<<endl;
}
else if(b == 1){
    cout<<1<<endl;
}
else if((a*b)%2 == 0){
    cout<<(a*b)/2<<endl;
}
else{
        cout<<((a*b)/2)+1;

}
    return 0;
}
