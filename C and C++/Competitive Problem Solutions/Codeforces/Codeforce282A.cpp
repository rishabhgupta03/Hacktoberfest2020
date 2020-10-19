#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int answer=0;
    string *input=new string[n];
    for(int i=0;i<n;i++){
        char operation[3];
        for(int j=0;j<3;j++)
        cin>>operation[j];
        if(operation[0]=='+'){
            ++answer;
        }
        else if(operation[0]=='-'){
            --answer;
        }
        else if(operation[2]=='+'){
            answer++;
        }
        else if(operation[2]=='-'){
            answer--;
        }

    }
    cout<<answer;
    return 0;   
}