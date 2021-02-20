#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626
void bdla(char &ch1, char &ch2){
    char temp = ch1;
    ch1 = ch2;
    ch2 = temp;
return;
}
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n%2 == 0){
            for(int i=0; i<n; i+=2){
                bdla(s[i],s[i+1]);
            }
        }
        else{
            for(int i=0; i<n-2; i+=2){
                bdla(s[i],s[i+1]);
            }
        }
        for(int i=0; i<n; i++){
            s[i] = 97 + (122-s[i]);
        }
        cout<<s<<endl;
    }    
    return 0;
}