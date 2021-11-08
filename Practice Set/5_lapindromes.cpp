#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
int main(){
   int t;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       int count=0,len=s.length(),a[26]={0},b[26]={0};
       for(int i=0;i<len/2;i++){
           a[s[i]-'a']++;
       }
       for(int i=(len+1)/2;i<len;i++)
        {
            b[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i]){
                count=1;

            }
        }
        if(count==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
   }
   return 0;
}