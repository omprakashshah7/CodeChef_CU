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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (arr[0] != 1 or arr[n - 1] != 1)
            cout << "no" << endl;
        else
        {
            int j = 1;
            bool flag = 1;
            while (j <= n / 2)
            {
                if (arr[j] < 8 and (arr[j] == arr[j - 1] or arr[j] == arr[j - 1] + 1))
                {
                    if (arr[n - 1 - j] != arr[j])
                    {
                        flag = 0;
                        break;
                    }
                }
                else
                {
                    flag = 0;
                }
                j++;
            }
            if (flag == 0)
                cout << "no" << endl;
            else
            {
                if (arr[n / 2] == 7)
                    cout << "yes" << endl;
                else
                    cout << "no" << endl;
            }
        }
    }
    return 0;
}