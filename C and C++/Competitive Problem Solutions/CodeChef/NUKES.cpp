#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vect vector<int>

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll a, n, k;
    cin>>a>>n>>k;
    int nuke[k] = {0};
    for(int i = 0; i < k; i++){
        nuke[i] = a % (n + 1);
        a = a / (n + 1);
        if(a == 0) break;
    }
    for(int i = 0; i < k; i++){
        cout<<nuke[i]<<" ";
    }
	return 0;
}
