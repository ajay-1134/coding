#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;    
    cin>>n;
    string s;
    cin>>s;
    int flag = 0;

    int x = 0;
    int y = 0;
    for(int i=0; i<n; i++){
        if(i == 0){
            if(s[i] == 'L' || s[i] == 'R') flag = 0;
            else flag = 1;
            if(s[i] == 'L')
                x = x-1;
            else if(s[i] =='R' )
                x = x+1;
            else if(s[i] == 'U')
                y = y+1;
            else if(s[i] == 'D')
                y = y-1;
            // continue;
        }
        else{
        if(flag == 1){
            if(s[i] == 'L'){
                x = x-1;
                flag = 0;
            }
            else if(s[i] =='R' ){
                x = x+1;
            flag = 0;
            }
        }
        else
        { 
            if(s[i] == 'U'){
                y = y+1;
                flag = 1;
            }
            else if(s[i] == 'D'){
                y = y-1;
            flag = 1;
            }
        }
        }
        // cout<<flag<<endl;
    }
    cout<<x<<" "<<y<<endl;

    }
    return 0;
}