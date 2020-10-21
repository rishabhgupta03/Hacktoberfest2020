#include<iostream>
using namespace std;
bool findinarray(int* input, int x, int size){
    for(int i=0;i<size;i++){
        if(input[i]==x)
            return true;
    }
    return false;
}
int main(){
    int n, size1, size2, flag=1;
    cin>>n>>size1;
    int *input1=new int[size1];
    for(int i=0;i<size1;i++)
    cin>>input1[i];
    cin>>size2;
    int *input2=new int[size2];
    for(int i=0;i<size2;i++)
    cin>>input2[i];
    for(int i=1;i<=n;i++){
        bool ans=findinarray(input1, i,size1)||findinarray(input2, i ,size2);
        if(ans==false){
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;   
}