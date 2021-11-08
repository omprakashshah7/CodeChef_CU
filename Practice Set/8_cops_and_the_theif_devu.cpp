#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
int main(){
   int t;
	cin >> t;
	while (t--){
		int b[100]={0},c,d,e,sum=0;
		cin >> c >> d >> e;
		int f[c];
		for (int i=0;i<c;i++){
			cin >> f[i];
			for(int j=(((f[i]-d*e)>0)?(f[i]-d*e-1):0);j<(((f[i]+d*e)<100)?(f[i]+d*e):100);j++){
				b[j]--;
			}
		}
		for (int i=0;i<100;i++){
			if (b[i]==0)
				sum++;
		}
		cout << sum << endl;
	}
   return 0;
}