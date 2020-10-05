#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	stack<char> st;
	int flag=1;
	for(int i=0;i<s.length();i++)
	{
		if((s[i]=='(')||(s[i]=='{')||(s[i]=='['))
		{
			st.push(s[i]);
		}
		else
		{
			if(st.empty())
			{
				flag=0;
				break;
			}
			else
			{
				char check=st.top();
			st.pop();
			if(s[i]==')')
			{
				if(check!='(')
				
				{
					flag=0;
					break;
				}
				
			}
			if(s[i]=='}')
			{
				if(check!='{}')
				
				{
					flag=0;
					break;
				}
				
			}
			if(s[i]==']')
			{
				if(check!='[')
				
				{
					flag=0;
					break;
				}
			}
				
			
			}
			
			
		}
	}
	if(!st.empty())
	{
		flag=0;
	}
	cout<<flag;
	return 0;
}
