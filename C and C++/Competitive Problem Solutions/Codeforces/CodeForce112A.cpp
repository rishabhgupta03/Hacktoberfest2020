#include<iostream>
#include <cmath>
#include<string.h>
#include<string>
using namespace std;
char* convert(string s){
    int n = s.length(); 
  
    // declaring character array 
    char* char_array=new char[n + 1]; 
  
    // copying the contents of the 
    // string to char array 
    strcpy(char_array, s.c_str()); 
  
    return char_array;
}

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    char *ch1=new char[s1.length()];
    char *ch2=new char[s2.length()];
    ch1=convert(s1);
    ch2=convert(s2);
    cout<<strcmpi(ch1,ch2);
    return 0;   
}