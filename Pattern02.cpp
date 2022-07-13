/*
This code prints the following Pattern 
1
01
101
0101
10101
and takes number of rows as input
 */
 
#include <iostream>
using namespace std;

int main()
{
int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=i;j++)
	    {
	        //case odd
	        if(i%2!=0){
	            
	          if(j%2!=0){
	              cout<<1;
	          }  
	          else
	          {
	              cout<<0;
	          }
	        }
	        //case even
	        else
	        {
	            if(j%2!=0){
	              cout<<0;
	          }  
	          else
	          {
	              cout<<1;
	        }
	    }
	}
	cout<<endl;
	}
	
	return 0;
  }
