/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
       

        stack<TreeNode*> st;
        TreeNode* curr = root , *temp;
        

        while(!st.empty() or curr!=NULL){
            if(curr!=0){
                st.push(curr);
                curr = curr -> left;
            }

            else{
                temp = st.top()-> right;

                if(temp == 0){
                    temp = st.top();
                    st.pop();

                    postorder.push_back(temp->val);

                    while(!st.empty() && temp == st.top() -> right){
                        temp = st.top();
                        st.pop();
                        postorder.push_back(temp -> val);
                    }


                }

                else
                    curr = temp;
            }
        }


        return postorder;

    }
};

