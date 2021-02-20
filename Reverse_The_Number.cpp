#include<bits/stdc++.h>
using namespace std;
// method 1
int rev(int n){
    int ans = 0;
    while(n){
        int rem = n%10;
        ans = ans*10 + rem;
        n = n/10;
    }
    return ans;
}
// Method -2
int rev1(string s){
    reverse(s.begin(), s.end());
    return stoi(s);
}

// Method -3
string rev2(string s){
    reverse(s.begin(), s.end());
    while(s[0] == '0'){
        s.erase(s.begin()+0);
    }
    if(s.length() == 0){
        return "0";
    }
    return s;
}

int main()
{
    // method 2
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // cout<<rev1(s)<<endl;
        cout<<rev2(s)<<endl;
        // cout<<rev(stoi(s))<<endl;
    }
    return 0;
}