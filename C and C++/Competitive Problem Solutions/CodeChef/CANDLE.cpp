#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vect vector<int>

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc, i, x, min, a[10];
	cin>>tc;
	while (tc --) {
	    min=100000;
		for(i=0;i<10;i++)
		{
			cin>>a[i];
			if(i==0)
				a[i]++;
			if(a[i]<min)
			{
				min=a[i];
				x=i;
			}
		}
		if(x!=0)
		{
			for(i=0;i<=min;i++)
				cout<<x;
		}
		else
		{
			i=pow(10,min);
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}
