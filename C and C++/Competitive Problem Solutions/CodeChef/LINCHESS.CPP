

#include<bits/stdc++.h>
using namespace std;

#define w(testCase)  int testCase; cin>>testCase; while(testCase--)
#define mod   1000000007
#define inf   1e18
#define pb push_back
#define eb emplace_back
#define ll long long
#define ull unsigned long long
#define ff first
#define ss second
#define mp make_pair

int gcd(int a,int b)
{
    if(a==0)
        return b;

    return gcd(b,a%b);
}
void always()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

}

int32_t main()
{
    always();
    w(t)
    {
    	ll n,k;
    	cin>>n>>k;
    	ll int a[n];
    	ll int min = LONG_MAX;
    	ll ans = -1;
    	for (int i = 0; i <n ; ++i)
    	{
    		cin>>a[i];
    		if(a[i]<=k and k%a[i]==0) 
    		{
    			ll x = k/a[i];
    			x-=1;
    			if(x<min)
    			{
    				min = x;
    				ans = a[i];
    			}
    		}
    		else
    			continue;
    		
    	}
    	if(min==LONG_MAX)
    		min = -1;
    	cout<<ans<<endl;

    }
    return 0;
}