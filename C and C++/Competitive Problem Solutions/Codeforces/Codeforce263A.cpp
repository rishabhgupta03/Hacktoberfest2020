#include<iostream>
using namespace std;
int main(){
    int input[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>input[i][j];
        }
    }
    int i,j,flag=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(input[i][j]==1){
                flag=1;
                break;
            }
            
        }
        if(flag==1){
            break;
        }
    }
    int ansx=2-i, ansy=2-j;
    if (ansx<0){
        ansx*=-1;
    }
    if (ansy<0){
        ansy*=-1;
    }
    cout<<ansx+ansy;
    return 0;   
}