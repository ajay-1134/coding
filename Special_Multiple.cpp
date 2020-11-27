#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool check(int n){
    while(n){
        int rem = n%10;
        if(rem != 0 && rem != 9){
            return false;
        }
        n = n/10;
    }
    return true;
}
int flag = 0;


// x = 9,  n = 7
void generate(int x, int n){
    queue<int>q;
    q.push(x);
    // q : 9
    while(q.size() != 0){
        int val = q.front(); // val = 90
        q.pop(); // q : 900 909 990 999  
        if(val%n == 0){
            cout<<val<<endl;
            break;
        }
        int val1 = val*10 + 0;
        int val2 = val*10 + 9;
        q.push(val1);
        q.push(val2);
    }
    return ;
}
signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int x = 9;
    generate(x, n);
    // while(1){
    //     if(check(x)){
    //         cout<<x<<endl;
    //         break;
    //     }
    //     x += n;
    // }
}
    return 0;
}