class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
       int ans = 0 , n = grid.size() , m = grid[0].size();
       vector<vector<int>> vis(n,vector<int>(m,0));
       queue<pair< pair<int,int> , int > > q;
       int tm = 0;
       
       for(int i=0; i<n; i++){
           for(int j=0; j<m; j++){
               if(grid[i][j] == 2) {
                   q.push ( {{i,j},tm} ); 
                   vis[i][j] = 2;
               }
           }
       }
       
       int row[] = {1,0,-1,0};
       int col[] = {0,1,0,-1};
       
       while(!q.empty()){
           
               int r =  q.front().first.first;
               int c =  q.front().first.second;
               int t =  q.front().second;
               q.pop();
               
              tm = max(tm,t);
               
            for(int i=0; i<4; i++){
                int nRow = row[i] + r;
                int nCol = col[i] + c;
               
               if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && vis[nRow][nCol] == 0 && grid[nRow][nCol] == 1)
                {
                    vis[nRow][nCol]  = 2;
                    q.push( { {nRow,nCol}, t+1 } );
                }
           }
       }
       
       for(int i=0; i<n; i++){
           for(int j=0; j<m; j++){
               if(grid[i][j] == 1 && vis[i][j] != 2) {
                   return -1;
               }
           }
       }
       
       return tm;
    }
};
