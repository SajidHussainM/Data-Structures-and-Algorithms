class Solution {
    
    private:
    
    void dfs(vector<vector<int>>& image, int row, int col, int newColor,vector<vector<int>> &ans 
    , int delRow[], int delCol[], int iniColour){
        ans[row][col] = newColor;
        
        int n = image.size() , m = image[0].size();
        
        for(int i=0;i<4;i++){
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];
            
            if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && image[nRow][nCol]==iniColour && ans[nRow][nCol]!=newColor){
                dfs(image,nRow,nCol,newColor,ans,delRow,delCol,iniColour);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size(), m = image[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        vector<vector<int>> ans = image;
        int iniColour = image[sr][sc];
        
        int delRow[] = { -1 , 0 , 1 , 0 };
        int delCol[] = { 0 , 1 , 0 , -1 };
  
        dfs(image,sr,sc,newColor,ans, delRow, delCol, iniColour);
        
        return ans;
    }
};
