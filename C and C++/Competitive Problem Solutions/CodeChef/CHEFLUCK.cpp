#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vect vector<int>

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin>>tc;
	while (tc --) {
	    int n;
	    cin>>n;
	    int k=-1;
	    for(int i=0;(i*4)<=n;i++)
	    {
	        if((n-(i*4))%7==0){
	        k=n-(i*4);
	        break;}
	    }
	    cout<<k<<endl;
	}
	return 0;
}
