#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string ans = "NO";
        map<int ,vector<int>>elv;
        for(int i=0;i<n;i++)
        {
            elv[arr[i]].push_back(i);
        }
        for(auto zz:elv)
        {
            if(zz.second.size()>=3)
            {
                ans = "YES";
                break;
            }
        }
 
        for(auto zz:elv)
        {
            if(zz.second.size()==2 && zz.second[0]!=zz.second[1]-1)
            {
                ans = "YES";
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}