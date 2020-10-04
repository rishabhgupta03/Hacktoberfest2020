#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<int>
#define pb push_back
#define mp make_pair
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	savitr
	int tc;
	cin>>tc;
	while( tc --) {
		ll n;
		cin>>n;
		vect arr;
		ll temp;
		for (int i = 0; i < n; i ++) {
			cin>>temp;
			arr.pb(temp);
		}
		ll diff = 0;
		ll total = 0;
		for (int i = 0; i < n-1; i ++) {
			diff = abs(arr[i+1] - arr[i]) - 1;
			total += diff;
		}
		cout<<total<<endl;
	}
	return 0;
}