#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;

vector <int > g[10005], gr[10005];
vector<bool> used(10005);
vector<int> order, component;

void dfs1 (int v) {
    used[v] = true;
    for (size_t i=0; i<g[v].size(); ++i)
        if (!used[ g[v][i] ])
            dfs1 (g[v][i]);
    order.push_back (v);
}

void dfs2 (int v) {
    used[v] = true;
    component.push_back (v);
    for (size_t i=0; i<gr[v].size(); ++i)
        if (!used[ gr[v][i] ])
            dfs2 (gr[v][i]);
}

signed  `       `   main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while (t--)
	{
		int n, a, b, i;
		cin >> n;

		int arr[10004] =
		{ 0 };

		for (i = 1; i <= n - 1; i++)
		{
			cin >> a >> b;
			arr[b]++;
		}
		int cnt = 0;

		for (i = 1; i < 10004; i++)
		{
			if (arr[i] > 1)
			{
				cnt = cnt + arr[i] - 1;
			}
		}
		cout << cnt << '\n';

	}

}