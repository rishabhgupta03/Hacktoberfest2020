#include<iostream>
#include<string>
using namespace std;
bool maxRepeating(string str) { 
    int len = str.length(); 
    int count = 0; 
    char res = str[0]; 
    for (int i=0; i<len; i++) { 
        int cur_count = 1; 
        for (int j=i+1; j<len; j++) { 
            if (str[i] != str[j]) 
                break; 
            cur_count++; 
        } 
        if (cur_count==7){ 
            return true; 
        } 
    } 
    return false;
} 

int main(){
    string input;
    cin>>input;
    if(maxRepeating(input)){
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    return 0;   
}