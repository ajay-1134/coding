#include<iostream>
using namespace std;
#define int long long int 
signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int flag = 0;
        int n = s.length();
        for(int i=0; i<n; i++){
            if(s[i] == s[i+1] && s[i] != 63){
                flag =1 ;
            }
            else{
                if(s[i] == '?' ){
                    if(i==0){
                        if( s[i+1] != 97){
                            s[i] = 97;
                        }
                        else if( s[i+1] != 98){
                            s[i] = 98;
                        }
                        else if( s[i+1] != 99){
                            s[i] = 99;
                        }                       
                    }
                    else if(i == (n-1) ){
                        if(s[i-1] != 97 ){
                            s[i] = 97;
                        }
                        else if(s[i-1] != 98){
                            s[i] = 98;
                        }
                        else if(s[i-1] != 99){
                            s[i] = 99;
                        }
                    }
                    else{
                        if(s[i-1] != 97 && s[i+1] != 97){
                            s[i] = 97;
                        }
                        else if(s[i-1] != 98 && s[i+1] != 98){
                            s[i] = 98;
                        }
                        else if(s[i-1] != 99 && s[i+1] != 99){
                            s[i] = 99;
                        }                        
                    }    
                }
            }
        }
        if(flag == 1){
            cout<<"-1"<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}