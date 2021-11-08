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
        cin >> n;
        string s;
        cin >> s;
        bool head = false;
        bool valid = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                continue;
            }
            if (!head && s[i] == 'H')
            {
                head = true;
            }
            else if ((!head && s[i] == 'T') || (head && s[i] == 'H'))
            {
                valid = false;
                break;
            }
            else if (head && s[i] == 'T')
            {
                head = false;
            }
        }
        if (valid && !head)
        {
            cout << "Valid" << endl;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}