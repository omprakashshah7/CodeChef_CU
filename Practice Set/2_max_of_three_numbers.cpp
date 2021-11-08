#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){


		vector<int> a(3);

		for(int i=0; i<3; i++){
			cin>>a[i];
		}

		sort(a.begin(), a.end(), greater<int>());

		cout<<a[1]<<endl;

	}
    return 0;
}