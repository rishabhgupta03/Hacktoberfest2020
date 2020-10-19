#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string*input=new string[n];
    for(int i=0;i<n;i++)
        cin>>input[i];
    unordered_map<string, int> data;
    for(int i=0;i<n;i++){
        if(data[input[i]]>0)
            cout<<input[i]<<data[input[i]]<<endl;
        else
            cout<<"OK"<<endl;
        data[input[i]]++;
    }
    return 0;
}