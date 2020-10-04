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
	    int n,m;
        cin>>n>>m;
        int arr[2*m]={0};
        for(int i=0;i<2*m;i++)
            cin>>arr[i];
        
        if(n==2*m)
            cout<<"yes\n";
        else
        {
            if((n-2*m)%2==0)
            cout<<"yes\n";
            else
            cout<<"no\n";
        }
	}
	return 0;
}
