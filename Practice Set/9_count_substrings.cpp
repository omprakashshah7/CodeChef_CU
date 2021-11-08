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
        int n;
        string str;
        cin >> n;
        cin >> str;
        int i = 0;
        long long int count = 0;
        while (str[i] != '\0')
        {
            if (str[i] == '1')
            {
                count++;
            }
            i++;
        }
        cout << count + ((count * (count - 1)) / 2) << '\n';
    }
    return 0;
}
