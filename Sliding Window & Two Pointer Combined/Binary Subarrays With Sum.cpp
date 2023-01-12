/*

930. Binary Subarrays With Sum
Medium
1.8K
59
Companies
Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.

A subarray is a contiguous part of the array.

 

Example 1:

Input: nums = [1,0,1,0,1], goal = 2
Output: 4
Explanation: The 4 subarrays are bolded and underlined below:
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
Example 2:

Input: nums = [0,0,0,0,0], goal = 0
Output: 15
 

Constraints:

1 <= nums.length <= 3 * 104
nums[i] is either 0 or 1.
0 <= goal <= nums.length

*/


class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size(), ans = 0;
        int prefix[n];


        prefix[0] = nums[0];
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1] + nums[i];
        }


        unordered_map<int, int> mp;

        for(int i=0; i<n; i++){
            if(prefix[i] == goal) ans++;

            //prefix[i] - goal will help you find a index in map such that the sum from that index to our current index will give the goal , 
            mathematically prefix[i] - goal = prefix[j] thhis is nothing but prefix[i] - prefix[j] = goal
            if(mp.find(prefix[i] - goal) != mp.end())

            //We are adding this beacuse we may find more than one prefix[i] - goal in the map from those indexes till the current index the sum is same .
            /*
            If anyone is confused why the count was increased by myMap[ curr - k ] instead of just count+=1 .
            It was because prefix sum can be same because of some negative values in the array. 
            so out next occuring k will also pair with those negative values also .
            

            consider this case A : [3 4 7 2 -3 1 4 2 1 ]
            preSum : [3 7 14 16 13 14 18 20 21]

            you can see 14 occured twice because of the subsequence [2 -3 1] their sum is 0. 
            so When you are at the final index with value 1 . you have curr - k = 21 - 7 = 14 . you check for 14 it has occured twice . 
            so you need to consider subsequences [2 -3 1 4 2 1] and [4 2 1] . Hope this helps
*/
                ans += mp[prefix[i] - goal];

            mp[prefix[i]]++;

        }


        return ans;
    }
};
