#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 0;
        for (int i = 1; i <= k; i++)
        {
            ans = max(ans, n % i);
        }
        cout << ans << endl;
    }
    return 0;
}