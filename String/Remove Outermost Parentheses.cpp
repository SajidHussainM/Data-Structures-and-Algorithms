/*


IntuitionQuote from @shubhama,Primitive string will have equal number of opened andclosed parenthesis.
Explanation:opened count the number of opened parenthesis.Add every char to the result,unless the first left parenthesis,
and the last right parenthesis.Time Complexity:O(N) Time, O(N) space 
From<https://leetcode.com/problems/remove-outermost-parentheses/discuss/270022/JavaC%2B%2BPython-Count-Opened-Parenthesis> 
*/




string removeOuterParentheses(string s) {

        int count = 0;

        string res;

     

      for(int i=0;i<s.size();i++){

        if(s[i]=='(' && count++>0)  res += s[i];

        if(s[i]==')' && count-->1)  res += s[i];

      }

     

      return res;

    }

