/*

Sixy primes are prime numbers that differ from each other by six. For example, the numbers 5 and 11 are both sixy primes, because they differ by 6. Given a range of the form [L, R]. The task is to find all the sixy prime pairs in the range in increasing order.

Example 1:

Input: L = 11, R = 19
Output: [11, 17, 13, 19] 
Explanation: There are total two pair possible
with difference 6 and these are 11,17,13,19.  

Example 2:

Input: L = 6, R = 20
Output: [7, 13, 11, 17, 13, 19]
Explanation: There are total three pair possible
with difference 6 and these are 7,13,11,17,13,19. 

Your Task:  
You dont need to read input or print anything. Complete the function sixyPrime() which takes L and R as input parameter and returns all the sixy prime exist and if there are no sixy prime exist returns -1.

Expected Time Complexity: O(nloglogn)
Expected Auxiliary Space: O(n)

Constraints:
1 <= L <= R <=103


*/





class Solution {
  public:
  vector<int> sieveOfEratosthenes(int N)
    {
        vector<int> prime(N+1,0), ans;
        
        for(int i=2; i<=N; i++){
            if(prime[i] == 0){
                for(int j=i*i; j<=N; j = j+i){
                    prime[j] = 1;
                }
            }
        }
        
       
        
        return prime;
    }
    vector<int> sixyPrime(int L, int R) {
        vector<int> primes = sieveOfEratosthenes(R);
        int mini = INT_MAX;
        int pairA, pairB;
        vector<int> ans;
        
        for(int i=max(2,L); i<=R; i++){
            for(int j=i+1; j<=R; j++){
                if(primes[i] == 0 && primes[j] == 0 && abs(j-i) ==6 ){

                    ans.push_back(i);
                    ans.push_back(j);
                    
                }
            }
        }
        
        if(ans.size() == 0)   return {-1};
        return ans;
    }
};
