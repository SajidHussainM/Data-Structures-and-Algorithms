/*

85. Maximal Rectangle
Hard
8.1K
129
Companies
Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

 

Example 1:


Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 6
Explanation: The maximal rectangle is shown in the above picture.
Example 2:

Input: matrix = [["0"]]
Output: 0
Example 3:

Input: matrix = [["1"]]
Output: 1
 

Constraints:

rows == matrix.length
cols == matrix[i].length
1 <= row, cols <= 200
matrix[i][j] is '0' or '1'.



*/


//Here we are building on the previous histogram problem only, for each row we are finding the largest area possible and when we move to the next row we have the 
//option  if there is no zero we increase that index by 1 else reset to zero, because no rectangle is possible.

class Solution {
    int largestRectangleArea(vector<int>& heights) {
        int area = INT_MIN , n = heights.size();

        stack<int> st;

        vector<int> leftSmall(n) , rightSmall(n);

        for(int i=0; i<n; i++){
            while(!st.empty() && heights[i] <= heights[st.top()] )
                st.pop();

            if(!st.empty()) leftSmall[i] = st.top() + 1;
            else leftSmall[i] = 0;

            st.push(i);
        }


        while(!st.empty()) st.pop();


        for(int i=n-1; i>=0; i--){
            while(!st.empty() && heights[i] <= heights[st.top()])
                st.pop();

            if(!st.empty()) rightSmall[i] = st.top() - 1;
            else rightSmall[i] = n - 1;

            st.push(i);
        }




        for(int i=0; i<n; i++){
            int a = heights[i] * (rightSmall[i] - leftSmall[i] + 1);
            area = max(area,a);
        }


        return area;
        
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {

        int area = -1; int n = matrix.size() , m = matrix[0].size();

        vector<int> temp(m,0);

        for(int i=0; i<n; i++){
            
            for(int j=0; j<m; j++){
                if(matrix[i][j]  == '0') temp[j] = 0;
                else{
                    temp[j] += 1;
                }
            }

            area = max(area , largestRectangleArea(temp));
           
        }

        return area;
        
    }
};
