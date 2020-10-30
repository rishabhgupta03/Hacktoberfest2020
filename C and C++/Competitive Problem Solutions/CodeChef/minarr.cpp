// https://www.codechef.com/LTIME71B/problems/MINARRS
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll l[n];
		for(ll i=0;i<n;i++)
		{
			cin>>l[i];
		}
		vector<ll> d;
		
		ll num=0;
		for(ll i=0;i<31;i++)
		{
			ll s1=0;
		ll s0=0;
			for(ll j=0;j<n;j++)
			{
				if((l[j]&(1<<i)))
				{
					s1++;
				}
				else
				{
					s0++;
				}
			}
		
		if(s1>s0)
		{
			num+=1<<i;
		}
    }
	ll sum1=0;
	for(ll i=0;i<n;i++)
	{
		sum1+=l[i]^num;
	}
	cout<<sum1<<endl;
}
}
