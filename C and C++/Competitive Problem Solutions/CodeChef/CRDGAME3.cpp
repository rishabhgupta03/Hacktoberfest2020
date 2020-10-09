
// Question Statement
// ------------------
// Chef is playing a card game with his friend Rick Sanchez. He recently won against Rick's grandson Morty; however, Rick is not as easy to beat. The rules of this game are as follows:

// The power of a positive integer is the sum of digits of that integer. For example, the power of 13 is 1+3=4.
// Chef and Rick receive randomly generated positive integers. For each player, let's call the integer he received final power.
// The goal of each player is to generate a positive integer such that its power (defined above) is equal to his final power.
// The player who generated the integer with fewer digits wins the game. If both have the same number of digits, then Rick cheats and wins the game.
// You are given the final power of Chef PC and the final power of Rick PR. Assuming that both players play optimally, find the winner of the game and the number of digits of the integer he generates.

// Link : https://www.codechef.com/AUG20B/problems/CRDGAME3

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
    // Note:
    // so being precise we have to generate a number whose sum of digits is equal to the given number i.e Pr,Pc now 
    // the less the number we use, it's better
    // so we have made num_gen() function which generates a number whose sum of digits is equal to the
    // given number (Pr or Pc) by continously dividing with 9 (as the 9 is largest single digit number) 
    // 
    
    always();
    w(t)
    {
    	ll pc,pr;

    	cin>>pc>>pr;    // taking power of chef and rick respectively.
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