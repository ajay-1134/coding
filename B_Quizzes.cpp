#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int n,x;
cin>>n>>x;
string s;
cin>>s;
int score = x;
for(int i=0; i<n; i++){
    if(s[i] == 'x'){
        if(score==0){
            score;
        }
        else{
            score--;
        }
    }
    else{
        score++;
    }
}
cout<<score<<endl;
    return 0;
}