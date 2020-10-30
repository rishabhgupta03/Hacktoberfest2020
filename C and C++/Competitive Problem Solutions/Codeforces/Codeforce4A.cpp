#include<iostream>
using namespace std;
int main(){
    int weight;
    cin>>weight;
    if(weight%2==0&&weight!=2&&weight>0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;   
}