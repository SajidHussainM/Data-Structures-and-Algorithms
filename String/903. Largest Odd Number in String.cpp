#include <bits/stdc++.h>#define mod 100000007
#define ll long longusing namespace std;
/*
The intution here isto find any odd number from the right, if we find any odd number From the right thenthat number plus all the numbers to  itsleft is also odd. 
  Eg:  222222511113 We find 3 is thefirst odd from right  then any numberplus odd is odd so we return 22222251113 
  */
    
    stringlargestOddNumber(string num) {    
    int n = num.size();     
      int i;        
      for(i=n-1;i>=0;i--){          
        if((num[i]-'0')%2!=0) break;        
      }              
      if(i>=0) return num.substr(0,i+1);     
    return "";    
    }

class Solution {
    private:
        long long find(int i, int j, vector<int>arr, int x){
            unordered_map<int,int> mp;
            
            for(int i=0; i<j; i++){
                mp[arr[i]]++;
            }
            
            
            for(auto it : mp){
                if(it.second!=3) return 0;
            }
            
            return 1;
            
        }
  public:
    long long goodSubarrays(int n,int x, vector<int>arr) {
        int l = 3 * x;
        long long sum = 0;
        
        for(int i=0; i<n-l; i++){
            sum += find(i,i+l,arr,x);
        }
        
        return sum;
    }
};

