/*
This code prints the following Pattern 

    *****
   *****
  *****
 *****
*****

and takes number of rows as input
 */
 
 
 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=n-i;j++)
	    {
	        cout<<" ";
	    }
	    for(int j=1;j<=n;j++)
	    {
	        cout<<"*";
	    }
	    cout<<endl;
	    
	    
	}
	
	        
	return 0;
}
