
// Question Statement
// --------------------
// Chef wants to play a game of linear chess on a one-dimensional board ― an infinite row of squares numbered by positive integers. In this game, he has a pawn, which is initially at a square K. There are also N other people (numbered 1 through N); Chef can choose one of them to play against. For each valid i, the i-th player would play in the following way:

// Take a pawn and place it on a square Pi.
// Repeat the following move any number of times: move the pawn from its current square Pi squares forward, i.e. from a square s, this player's pawn is moved to the square s+Pi.
// If this player moves their pawn to the square with Chef's pawn, then Chef's pawn is captured and he loses the game.
// Unfortunately, Chef cannot move his pawn during the game, making him an easy target for other players. Given the starting positions of all N+1 players, find a player who can capture Chef's pawn in the smallest number of moves or determine that no player can capture his pawn.
// ---------------
// Link : https://www.codechef.com/AUG20B/problems/LINCHESS


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