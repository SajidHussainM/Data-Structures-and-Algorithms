/*
This code prints the following Pattern 
    1
   12
  123
 1234
12345

and takes number of rows as input
 */

#include <iostream>
using namespace std;

int main(){
  int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
	    for(int j=1;j<=n-i;j++)
	    {
	        cout<<" ";
	    }
	    for(int j=1;j<=i;j++)
	    {
	        cout<<j;
	    }
	    cout<<endl;
	}
	return 0;
}
