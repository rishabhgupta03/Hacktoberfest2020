#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vect vector<int>

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,q;
	cin>>n>>q;
	long long int a[n+1],b[n+1];
	for(int i=1;i<=n;i++){
	    cin>>a[i];
	}
	for(int i=1;i<=n;i++){
	    cin>>b[i];
	}
	while(q--){
	    int l,r;
	    cin>>l>>r;
	    long long int total=0;
	    for(int i=l;i<r+1;i++){
	        total+=a[i]*b[i];
	    }
	    cout<<total<<endl;
	}
	return 0;
}
