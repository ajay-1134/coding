#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        int arr[n];
        
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j <= i; j++)
            {
                 = arr1[i] * arr2[j];
            }
        }
        sort(arr, arr + n);
        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            cnt = cnt + arr[k];
            if (cnt >= n)
            {

                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}