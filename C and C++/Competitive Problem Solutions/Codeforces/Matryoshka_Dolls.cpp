// Question Statement
// ====================

// Matryoshka Dolls are Russia's most popular souvenirs. They are sets of wooden figurines of decreasing size placed one inside another, though they have the same exact shape.

// Our Matryoshka Doll is known to have an integer size S which is the largest doll size in the collection, and each doll should have size X times less than the doll that holds it(size of the doll≤size of the doll that holds itX).

// Given S and X, What is the maximum number of dolls that can be nested inside each other.

// Link : http://codeforces.com/gym/102267/problem/C


 
 
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
 	ll a,b;
 	cin>>a>>b;
 	ll c =0;
 	while(a>0)
 	{
 		a = a/b;
 		c++;
 	}   
 	cout<<c<<endl;
    return 0;
}