#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vect vector<int>
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back

int main() {
    savitr
	int tc;
	cin>>tc;
	ll p, h;
	while (tc --) {
	    cin>>h>>p;
	    while (p > 0) {
	        h -= p;
	        p /= 2;
	    }
	    if (h <= 0) cout<<"1"<<endl;
	    else cout<<"0"<<endl;
	}
	return 0;
}
