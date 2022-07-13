Problem Statement
Take an array with n elements with possibly duplicate elements as the input. The task is to find the index of the first occurrences of the element x in the array and, if it is not present, return -1.
Input Format:
The first line contains an integer N representing the size of the array.

The next line contains N space-separated integers representing the elements of the array.

The last line contains an integer 'x' whose index has to be found.
Output Format:
The only line of the output prints the Index or -1.
Constraints:
1 <= N <= 10^3
1 <= arr[i] <= 10^9
1 <= x < N
Sample Input 1 :
8
7 5 2 11 2 43 1 1
2
Sample Output 1 :
2
Explanation Of Sample Input 1:
2 is present twice in the input array and the first time it appears is at index 2.
Sample Input 2 :
8
7 5 2 11 2 43 1 1
10
Sample Output 2 :
-1
Explanation Of Sample Input 2:
10 is not present in the array so the output is -1.


Solution:

#include <iostream>
using namespace std;

 

int main() {

  int n,x,j;

   cin>>n;

   int arr[n];

   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }

   cin>>x;

   for( j=0;j<n;j++)
   {
       if(arr[j]==x)
       {
           cout<<j<<endl;
           break;  
       }                            
   }

   if(j==n)
   {
    cout<<-1;
   }
   

   

   return 0;

}
