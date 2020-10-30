// https://www.codechef.com/LTIME71B/status/FASTFOOD
#include <bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(int i = a; i < b ; i++)
#define FASTIO std::ios::sync_with_stdio(false);
#define pb push_back
#define vi vector<int> 
#define si set<int>
#define mp make_pair
#define ld long double
#define F first
#define S second
#define inf 1e18
#define debug(x) cout<<x<<" "; cout<<endl
#define all(x) x.begin(),x.end()
#define r0 return 0

using namespace std;

int main() 

{
    int t;
    cin>>t;
    
    while(t--)
    {   
        int n;
        cin>>n;
        
        
        int a[n+1] ={0},b[n+1]={0};
        ll suma =0 , sumb = 0;
        
        FOR(i,0,n)
        {   int test; 
            cin>>test;
            a[i+1] = test;
            suma+=a[i+1];
        }
        
        FOR(i,0,n)
        {   
            int test; 
            cin>>test;
            b[i+1] = test;
            sumb+=b[i+1];
        }
        
        
        //for(auto x:a) debug(x);
        //for(auto x:b) debug(x);
        //ll rema = suma;
        //ll remb = sumb;
        
        ll maxi = 0; 
        
        ll sb = 0;
        ll sa = suma;
        FOR(i,1,n+1)
        {   //cout<<"sa= "<<sa<<", sb = "<<sb<<endl;
            maxi = max(maxi, sa+ sb);
            
            sa -= a[n-i+1];
            sb += b[n-i+1];
            //cout<<"a[n-i] "<<a[n-i-1]<<"b[n-i] "<<b[n-i-1]<<endl;
            
        }
        
        if(a[1] < b[1]) maxi = max(sumb , maxi);
        
        cout<<maxi<<endl;
    }
   

    r0;
}
