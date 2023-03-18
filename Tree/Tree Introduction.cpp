#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    
     node *left;
     node *right;
     
     
     node() : data(0) , left(nullptr) , right(nullptr) {}
     
     node(int x) : data(x) , left(nullptr) , right(nullptr) {}
     
     
     node(int x, node *left, node *right) : data(x) , left(left) , right(right) {}
        

};


class Solution{
public:

    void create_tree(node* root0, vector<int> &vec){
        queue<node*> q;
        q.push(root0);
        
        for(int i=1; i<vec.size(); i+=2){
            auto temp = q.front();
            
            q.pop();
            
            temp -> left = new node(vec[i]);
            q.push(temp -> left);
            
            temp -> right = new node(vec[i+1]);
            q.push(temp -> right);
            
            
        }
    }

};


vector <int> preorder(node* root)
{
        
        vector<int>v;
        if(root==NULL)
        {
            return v;
        }
        stack<node*>s;
        node*curr=root;
        while(curr!=NULL || s.empty()== false)
        {
            while(curr!=NULL)
            {
                v.push_back(curr->data);
                if(curr->right!=NULL)
                {
                    s.push(curr->right);
                }
                curr=curr->left;
            }
            if(!s.empty())
            {
            curr=s.top();
            s.pop();
            }
            
        }
        return v;
       
        
        
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7};
    node *rootnode = new node(vec[0]);
    
    Solution obj ;
    obj.create_tree(rootnode, vec);
    
    
    vector<int> ans = preorder(rootnode);
    
    for(auto it : ans) cout<<it<<" ";
    
    
    
    
    return 0;
}

