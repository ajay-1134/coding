#include <bits/stdc++.h>
using namespace std;
int bin(int c)
{
    int ans = 1;
    while (c/2)
    {
        ans = ans * 2;
        c = c / 2;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int ans,d,c,y;
        cin>>c;
        d=bin(c);
        d--;
        y=d^c;
        ans=y*d;
        cout << d<<" "<< ans << endl;
    }
    return 0;
}