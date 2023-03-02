class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0};
        vector<int> bfs;
        queue<int> q;
        q.push(0);
        
        vis[0] = 1;
        
        while(!q.empty()){
            int node = q.front();
            bfs.push_back(node);
            q.pop();
            
            for(auto it:adj[node]){
                if(!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        
        return bfs;
        
    }
};
