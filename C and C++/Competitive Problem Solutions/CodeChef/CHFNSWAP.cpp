#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;
	while(t--)
	{
	    ll n; cin>>n;
	    ll b=(n*(n+1))/2;
	    if(b%2!=0)
	    {
	        cout<<0<<"\n";
	        continue;
	    }
	    ll l=1,r=n,flag=0,m=0,x=b/2;
	    while(l<=r)
	    {
	        m=(l+r)/2;
	        ll a=(m*(m+1))/2;
	        if(l==r)
	        break;
	        if(a==x)
	        {
	            flag=1;
	            break;
	        }
	        else if(x>a)
	        l=m+1;
	        else
	        r=m;
	    }
	    if(flag==0)
	    cout<<n-m+1<<"\n";
	    else{
	        ll k=n-m;
	        ll h=((m*(m-1))/2)+((k*(k-1))/2)+k;
	        cout<<h<<"\n";
	    }
	}
	return 0;
}