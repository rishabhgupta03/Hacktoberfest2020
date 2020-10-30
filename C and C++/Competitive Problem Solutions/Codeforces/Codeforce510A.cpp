#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++)
            cout<<"#";
            cout<<endl;        
        }
        else{
            if((i-1)%4==0){
                for(int j=0;j<m-1;j++)
                cout<<".";
                cout<<"#"<<endl;
            }
            else{
                cout<<"#";
                for(int j=0;j<m-1;j++)
                cout<<".";
                cout<<endl;
            }
        }
    }
    return 0;
}