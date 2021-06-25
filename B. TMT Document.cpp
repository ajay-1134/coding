#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool check(string s){
    stack<char>st1;
    stack<char>st2;
    int i = 0;
    int j = s.length() - 1;
    while(i <= j){
        if(s[i] == 'T'){
            st1.push(s[i]);
            i++;
            continue;
        }
        else if(st1.size() == 0){
            return false;
        }

        if(s[j] == 'T'){
            st2.push(s[j]);
            j--;
            continue;
        }
        else if(st2.size() == 0){
            return false;
        }

        if(s[i] == 'M'){
            if(st1.size() > 0 && st2.size() > 0){
                st1.pop();
                st2.pop();
                i++;
            }
        }
    }
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        for(int i =0; i<n-3; i++){
            if(s.substr(i, 3) == "TMT"){
                cnt++;
            }
        }

        int T=0, M=0;
        for(int i=0; i<n; i++){
            if(s[i] == 'T') T++;
            else M++;
        }

        int flag = 0;
        if(T == 2 *M){
            int mcnt = n/3;
            int p1 = 0, p2 = n-1;
            while(p1<p2){
                if(s[p1] == 'T' && s[p2] == 'T'){
                    int cnt = 0;
                    for(int i=p1+1; i<p2; i++){
                        if(s[i] == 'M') cnt++;
                    }
                    if(cnt >= mcnt){
                        mcnt--;
                    }
                    else{
                        flag = 1;
                        break;
                    }
                    p1++;
                    p2--;
                }
                else {
                    if(s[p1] != 'T') p1++;
                    if(s[p2] != 'T') p2--;
                }    
            }
        }
        else flag = 1;
        if(flag == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}