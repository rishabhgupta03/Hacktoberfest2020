#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin>>tc;
	while (tc --) {
	    int num;
        cin>>num;
        if(num % 2 == 0)
        cout<<num<<endl;
        else
        cout<<num - 1<<endl;
	}
	return 0;
}
