/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
        void f(Node* root, vector<int> &ans){
        if(root == NULL) return;
        
        
        f(root->left,ans);
        ans.push_back(root->data);
        f(root->right,ans);
        
        
    }

    vector<int> inOrder(Node* root) {
          vector<int> ans;
          
          f(root,ans);
          
          return ans;
    }
};
