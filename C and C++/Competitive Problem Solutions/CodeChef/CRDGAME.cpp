#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vect vector<int>
#define pb push_back
#define mp make_pair
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll numadd(ll num) {
	ll sum = 0;
	if (num < 10)
		return num;
	while (num != 0) {
		int x = num % 10;
		sum += x;
		num /= 10;
	}
	return sum;
}

int main() {
	savitr
	int tc;
	cin>>tc;
	while(tc --) {
		ll n;
		cin>>n;
		ll a, b, sumA, sumB, countA = 0, countB = 0;
		for (int i = 0; i < n; i ++) {
			cin>>a>>b;
			sumA = numadd(a);
			sumB = numadd(b);
			if (sumA > sumB)
				countA ++;
			else if (sumA < sumB)
				countB ++;
			else {
				countA ++;
				countB ++;
			}
		}
		if (countA > countB) cout<<"0 "<<countA<<endl;
		else if (countA < countB) cout<<"1 "<<countB<<endl;
		else cout<<"2 "<<countA<<endl;
	}
	return 0;
}