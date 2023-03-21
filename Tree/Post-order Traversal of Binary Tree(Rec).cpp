

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.

void f(Node* root, vector<int> &ans){
        if(root == NULL) return;
        
        
        f(root->left,ans);
        
        f(root->right,ans);
        
        ans.push_back(root->data);
        
        
}
    
    
vector <int> postOrder(Node* root)
{
         vector<int> ans;
          
          f(root,ans);
          
          return ans;
}
