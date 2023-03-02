//User function Template for C++

class Solution {
    private:
    
    void dfs(int node,vector<int> df[],int vis[]){
        vis[node]=1;
       
        
        for(auto it:df[node]){
            if(!vis[it]){
                vis[it]=1;
                dfs(it,df,vis);
            }
        }
    }

  public:
    int numProvinces(vector<vector<int>> adj, int V) {
         int vis[V]={0};
         //rem adL is a list not a plain vector
        vector<int> adjL[V];
        int provinces = 0;
        
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 && i!=j){
                adjL[i].push_back(j);
                adjL[j].push_back(i);
                }
            }
        }
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,adjL,vis);
                provinces ++ ;
            }
        }
        
        return provinces;
    }
};
