// Question Statement

// ===========
// Mahmoud bought a rectangular shaped land, it's area was n units2.

// His best friend Ayoub asked him to calculate the height and the width of the land.

// Mahmoud hates math, can you help him to calculate the height and the width of the land?

// If there are multiple solutions print any of them.

// Link: http://codeforces.com/gym/102397/problem/B

 
#include<bits/stdc++.h>
 
using namespace std;
 
#define w(testCase)  ll int testCase; cin>>testCase; while(testCase--)
#define mod   1000000007
#define inf   1e18
#define pb push_back
#define eb emplace_back
#define ln long
#define ll long long
#define ull unsigned long long
#define db double
 
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
    ll n;
    cin>>n;
    ll div = 0;
    bool flag = 0;
    for (int i = 2; i < n; ++i)
    {
    	if(n%i==0)
	    		{
	    			flag = 1;
	    			div = i;
	    			break;
	    		}
    }
    if(flag)
    	cout<<n/div<<" "<<div<<"\n";
    else
    	cout<<n<<" "<<1<<"\n";
    return 0;
}