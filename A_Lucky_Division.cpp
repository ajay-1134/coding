#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int check(int k){
    while(k){
        if(k%10 != 4 && k%10 != 7){
            return 0;
            break;
        }
        k = k/10;
    }
    return 1;
}
int check1(int n){
    int num1 = 0 ,num2 = 0;
    while(num1 < n/2 && num2 < n/2){
        num1 = num1*10 + 4;
        // cout<<num1<<" ";
        if(n % num1 == 0){
            return 1;
        }
        num2 = (num1 / 10)*10 + 7;
        // cout<<num2<<" ";
        if(n%num2 == 0){
            return 1;
        } 
    }
    num1 = 0 ,num2 = 0;
    while(num1 < n/2 && num2 < n/2){
        num1 = num1*10 + 7;
        // cout<<num1<<" ";
        if(n % num1 == 0){
            return 1;
        }
        num2 = (num1 / 10)*10 + 4;
        // cout<<num2<<" ";
        if(n%num2 == 0){
            return 1;
        } 
    }
    return 0;
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    if(check(n) == 1){
        cout<<"YES"<<endl;
    }
    else{
        if(check1(n) == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
    return 0;
}