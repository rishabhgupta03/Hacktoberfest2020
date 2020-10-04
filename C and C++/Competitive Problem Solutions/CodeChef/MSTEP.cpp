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
	    int m[n][n];
	    map<int,pair<int,int>> record;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>m[i][j];
	            record[m[i][j]]={i,j};
	        }
	    }
	    vector<pair<int,int>> x;
	    for(auto i:record){
	        x.push_back({i.second.first,i.second.second});
	    }
	    int dist=0;
	    for(int i=0;i<x.size()-1;i++){
	        dist+=abs(x[i].first-x[i+1].first)+abs(x[i].second-x[i+1].second);
	    }
	    cout<<dist<<endl;
	}
	return 0;
}
