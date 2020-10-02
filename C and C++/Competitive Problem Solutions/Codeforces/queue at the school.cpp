#include<bits\stdc++.h>

using namespace std;

int main()
{
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t--){
        int i=0;
        while(i<s.size()){
            if (s[i]=='B' && s[i+1]=='G'){
                s[i] = 'G';
                s[i+1] = 'B';
                i=i+2;
                continue;
            }
            i++;
        }
    }
    cout<<s<<endl;
}
