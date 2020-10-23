// https://www.codechef.com/LTIME71B/problems/ATTND
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string a,b;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        a="";
        b="";
        int n;
        cin>>n;
        string s[n],k[n];
        unordered_multimap<string,string> mp;
        for(int j=0;j<n;j++)
        {
            cin>>a>>b;
            s[j]=a;
            k[j]=b;
             mp.insert(pair<string,string>(a,b));
        }
        for(int j=0;j<n;j++)
        {
            if(mp.count(s[j])>1)
                cout<<s[j]<<" "<<k[j]<<endl;
                else
                    cout<<s[j]<<endl;
            }
    }
    return 0;
}
