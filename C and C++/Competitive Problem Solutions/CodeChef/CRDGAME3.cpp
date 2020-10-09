

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
ll num_gen(ll fp)
{
	if(fp<=9)
		return 1;
	else
	{
		ll x=fp/9;
		ll r = fp%9;
		if(r>0)
		return (x+1);
		return (x);
	}
	
}
int32_t main()
{
    always();
    w(t)
    {
    	ll pc,pr;
    	cin>>pc>>pr;
    	ll sc,sr;
    	sc = num_gen(pc);
    	sr = num_gen(pr);
    	if(sr<=sc)
    	{
    		cout<<1<<" "<<sr<<endl;
    	}
    	else
    	{
    		cout<<0<<" "<<sc<<endl;
    	}
    	
    }
    return 0;
}