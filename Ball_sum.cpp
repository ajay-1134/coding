#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int main(){
int n;

int k;

while(cin>>n&&cin>>k&& n!=-1 && k!=-1){
if(k%2 ==0){
    int tot = (n*(n-1))/2;
    int g = gcd(k, tot);
    cout<<(k/g)<<"/"<<(tot/g)<<endl;
}
else {
        int tot = (n*(n-1))/2;
    int g = gcd(k-1, tot);
    cout<<(k-1/g)<<"/"<<(tot/g)<<endl;
}
}
    return 0;
}