#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n = s.length();
// for(int i=0; i<n; i++)
if(s[n-1] != 's')
{
    cout<<s<<"s"<<endl;
}
else{
    cout<<s<<"es"<<endl;
}
// for(int i=0; i<n; i++){
//     if(s[n] == 's')
//     cout<<s<<"es"<<endl;}

    return 0;
}