#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if((a==b and a !=c) or (b==c and a !=c) or (a==c and a !=b))

{
cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}

return 0;
}