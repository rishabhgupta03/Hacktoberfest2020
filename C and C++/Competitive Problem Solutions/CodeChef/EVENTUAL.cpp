#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vect vector<int>
#define Map map<char, int>
#define savitr ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mp make_pair

int main() {
	savitr
	int tc;
	cin>>tc;
	while(tc --) {
		Map m;
		int n;
		cin>>n;
		int flag = 0;
		string str;
		cin>>str;
		if (n % 2 != 0)
			cout<<"NO"<<endl;
		else {
			for (int i = 0; i < n; i ++) {
				m[str[i]] += 1;
			}
			for (Map :: iterator it = m.begin(); it != m.end(); it ++) {
				if (it -> second % 2 != 0) {
					cout<<"NO"<<endl;
					flag = 1;
					break;
				}
				else flag = 0;
			}
			if (flag == 0) cout<<"YES"<<endl;
		}
	}
	return 0;
}