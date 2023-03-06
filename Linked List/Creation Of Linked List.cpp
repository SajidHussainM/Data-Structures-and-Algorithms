#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
                
struct Node {
   int val;
   Node* next;
   
   Node() : val(0) , next(nullptr) {}
   Node(int val){
    this -> val = val;
    next = nullptr;
   }

   Node(int val, Node* next){
    this -> val = val;
    this -> next = next;
   }


} ;               
                
int main()
{
int t = 1;
//cin>>t;
while(t--)
{

    Node* head = nullptr;
    Node* tail = nullptr;
    int n; cin>>n;
    
    for(int i=0; i<n; i++){
        int val ; cin>>val;

        Node* temp = new Node(val);

        if(head ==  NULL) {
            head = temp;
            tail = temp;
            
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
        
    }
    
    Node* curr = head;

    while(curr != NULL){
        cout<<curr->val<<" ";
        curr= curr -> next;
    }
    
    curr = head;
    while(curr != NULL){
        Node* temp = curr;
        curr = curr -> next;
        delete temp;
    }
    
                
                
}
    return 0;
}
