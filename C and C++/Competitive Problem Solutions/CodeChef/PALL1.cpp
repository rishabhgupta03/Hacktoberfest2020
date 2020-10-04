#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc, r, b;
	cin>>tc;
	while (tc --) {
	    ll int n, a = 0;
	    cin>>n;
	    b = n;
	    while(n){
	        r = n % 10;
	        a = (a * 10) + r;
	        n /= 10;
	    }
	    if(a == b) cout<<"wins"<<endl;
	    else cout<<"loses"<<endl;
	}
	return 0;
}
