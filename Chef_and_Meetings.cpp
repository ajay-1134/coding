#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

float func(string st,string t){
    if(t == "AM"){
        string st1;
        for(int i=0; i<2; i++){
            st1 += st[i];
        }
        int nm1 = stoi(st1);
        if(nm1 == 12 ){
            nm1= 0;
        }
        string st2;
        int j=0;
        for(int i=3; i<5; i++){
            st2 += st[i];
            j++;
        }
        int nm2 = stoi(st2);
        return nm1 + (nm2/100.0);
    }
    else{
        string st1;
        for(int i=0; i<2; i++){
            st1 += st[i];
        }
        int nm1 = stoi(st1);
        if(nm1 == 12){
            nm1 =0;
        }
        string st2;
        int j=0;
        for(int i=3; i<5; i++){
            st2 += st[i];
            j++;
        }
        int nm2 = stoi(st2);
        return nm1 + (nm2/100.0) + 12.00;
    }
}


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int k;
    cin >> k;
    while (k--) {
        string s,t; 
        cin>>s>>t;
        // cout<<func(s,t)<<endl;
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            string s1,t1,s2,t2;
            cin>>s1>>t1>>s2>>t2;
            // cout<<func(s1,t1)<<" "<<func(s2,t2)<<endl;
            if(func(s1,t1) <= func(s,t) && func(s2,t2) >= func(s,t)){
                cout<<"1";
            }
            else cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}