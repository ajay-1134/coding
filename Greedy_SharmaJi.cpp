#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    int n;
    cin >> n;
    int s = sqrt(n), x, count = 0;
    // cout<<s;
    int i =2;
    while(n>3)
    {
        x = i * i;
        if (n % x == 0 && x != n)
        {
            count++;
            // cout<<x<<" ";
            n /= x;
            i = 2;
        }
        else{
            break;
        }
    }
    if (count % 2 == 0)
        cout << "Apna Time Aaega" << endl;
    else
        cout << "Aaj Ka Samosa Teri Taraf se" << endl;
    return 0;
}