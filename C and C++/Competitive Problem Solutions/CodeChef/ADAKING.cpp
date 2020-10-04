#include <iostream>
using namespace std;
int k;
int a=0,b=0;
char ar[8][8];

void fill(int q)
{
   
	    if(q!=64)
	    {
	        a=q%8;
	        b=q/8;
	        for(int i=7;i>=b;i--)
	        {
	            for(int j=7;j>=a;j--)
	            {
	                ar[i][j]='X';
	            }
	        }
	    }
	    
}

int main() {
	int t;
	cin>> t;
	
	
	while (t--)
	{
	    for(int i=0;i<=7;i++)
	    {
	        for (int j=0;j<=7;j++)
	        {
	            ar[i][j]='.';
	        }
	        
	    }
	    ar[0][0]='O';
	     cin >> k;
	     for(int i=64;i>=k;i=i-1)
	     {
	         fill(i);
	     }
	     for(int i=0;i<=7;i++)
	    {
	        for (int j=0;j<=7;j++)
	        {
	            cout << ar[i][j];
	        }
	        cout << endl;
	    }
	    
	}
	return 0;
}
