#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vect vector<int>

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc, n;
	char c;
	cin>>tc;
	while (tc --) {
	    cin>>n;
	    int flag = 0 ;
	    while(n--)
	    {
	        cin>>c;
	        if(c =='I' && flag != 1){ cout<<"INDIAN"<<endl;flag = 1;}
	        if(c == 'Y' && flag != 1){flag = 2 ;}
	    }
	    if(flag==0)cout<<"NOT SURE"<<endl;
	    if(flag == 2) cout<<"NOT INDIAN"<<endl;
	}
	return 0;
}
