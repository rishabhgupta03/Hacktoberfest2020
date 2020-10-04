#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vect vector<int>

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin>>tc;
	while (tc --) {
	    int n;
	    cin>>n;
	    int p[n], r[n];
	    
	    for(int j=0; j<n; j++){
	        cin>>p[j]; 
	    }
	    sort(p, p+n);
	    
	    for(int k=0; k<n; k++){
	        cin>>r[k]; 
	    }
	    sort(r, r+n);
	    
	    int count=n;
	    
	    for(int i=0,j=0; i<n && j<n; i++){
	        
	        if(r[i]<p[j]) count--;
	        else j+=1;
	    }
	    cout << count << "\n";
	}
	return 0;
}
