// Question Statement
// ===========================
// Recently Vova found n candy wrappers. He remembers that he bought x candies during the first day, 2x candies during the second day, 4x candies during the third day, …, 2k−1x candies during the k-th day. But there is an issue: Vova remembers neither x nor k but he is sure that x and k are positive integers and k>1.

// Vova will be satisfied if you tell him any positive integer x so there is an integer k>1 that x+2x+4x+⋯+2k−1x=n. It is guaranteed that at least one solution exists. Note that k>1.

// You have to answer t independent test cases.

// Link : http://codeforces.com/contest/1343/problem/A


 
#include<bits/stdc++.h>
using namespace std;
 
#define w(testCase)  int testCase; cin>>testCase; while(testCase--)
#define mod   1000000007
#define inf   1e18
#define pb push_back
#define eb emplace_back
#define ll long long
#define ull unsigned long long
 
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
    	ll n;
    	cin>>n;
    	ll x;
    	for(ll k = 2;k<=35;k++)
    	{
    		ll d = pow(2,k)-1;
    		if(n%d==0)
    		{
    			x = n/d;break;
    		}
    	}
    	cout<<x<<"\n";
    }
    return 0;
}
