#include<iostream>
using namespace std;
class team{
    public:
        int home, guest;
        void getdata(){
            cin>>home>>guest;
        }
};
int main(){
    int n, ans=0;
    cin>>n;
    team* input=new team[n];
    for(int i=0;i<n;i++)
    input[i].getdata();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
            continue;
            if(input[i].home==input[j].guest)
            ans++;
        }
    }
    cout<<ans;
    return 0;
}