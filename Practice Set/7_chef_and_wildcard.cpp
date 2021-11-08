#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
int main()
{
    int t1;
    cin >> t1;
    while (t1--)
    {
        string s, t;
        cin >> s >> t;
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '?' || t[i] == '?')
            {
                c++;
            }
            else if (s[i] == t[i])
            {
                c++;
            }
        }
        if (c == s.size())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
        return 0;
    }