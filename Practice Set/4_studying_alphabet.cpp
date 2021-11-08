#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s1;
    cin>>s1;
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int ct=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s1.size();j++)
            {
                if(s[i]==s1[j])
                {
                    ct++;
                }
            }
        }
   if(ct==s.length())
   {
       cout<<"Yes" << endl;
   }
   else
   {
       cout<<"No"<< endl;
   }
   
   }
   
}