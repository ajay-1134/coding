#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
//  2010, 2015, 2016, 2017 and 2019.
while(t--){
    int n;
    cin>>n;
    if(n == 2010 or n == 2015 or n == 2016 or n == 2017 or n == 2019){
         cout<<"HOSTED"<<endl;
    }
    else{
        cout<<"NOT"<<" "<<"HOSTED"<<endl;
    }
}
    return 0;
}