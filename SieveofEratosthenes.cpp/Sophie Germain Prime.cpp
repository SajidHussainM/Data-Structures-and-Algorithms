/*

Given N find all Sophie Germain Prime numbers less than N . A prime number p is called a sophie prime number if 2p+1 is also a prime number. The number 2p+1 is called a safe prime. 

Example 1:

Input: N = 5
Output: 2 3
Explanation: 2 and 3 are prime no. and 
2*2+1 = 5 and 3*2+1 = 7 are also prime
no.
Example 2:

Input: N = 3
Output: 2
Explanation: 2 is prime number and 2*2+1
= 5 is also a prime number.
 

Your Task:
You don't need to read or print anything your task is to complete the function sophie_primes() which takes N as input parameter and returns a list of all Sophie Germain Prime numbers in increasing order.
 

Expected Time Compelxity: O(N* log(N))
Expected Space Compelxity: O(N)

Constraints:
1 <= N <= 10000  
*/




class Solution{
	public:
	vector<int> sieveOfEratosthenes(int N)
    {
        vector<int> prime(N,0), ans;
        
        for(int i=2; i<N; i++){
            if(prime[i] == 0){
                for(int j=i*i; j<N; j = j+i){
                    prime[j] = 1;
                }
            }
        }
        
        
        return prime;
    }
    
   	vector<int> sophie_Primes(int n){
   	    vector<int> prime = sieveOfEratosthenes(2 * n), ans ;
   	    
   	    
   	    // for(int i=2; i<n; i++){
   	    //     cout<<i<<" "<<prime[i]<<endl;
   	    // }
   	    
   	    for(int i=2; i<n; i++){
   	        if(prime[i] == 0 && prime[2*i+1] == 0 )
   	                ans.push_back(i);    
   	        }
   	            
   	    
   	    
   	    return ans;
   	}    
};
