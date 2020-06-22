class Solution {
public:
    bool checkBound(int row, int col, int H, int W){
        return row >= 0 && row < H && col >= 0 && col < W;
    }

    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty() || grid[0].empty()){
            return 0;
        }
        int row = grid.size();
        int col = grid[0].size();
        int no_of_islands = 0;
        vector<pair<int,int>> directions{{1,0}, {0,1}, {-1,0}, {0,-1}};
        vector<vector<bool>> vis(row, vector<bool>(col));
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    no_of_islands++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    vis[i][j] = true;
                    while(!q.empty()){
                        pair<int,int> p = q.front();
                        q.pop();
                        for(pair<int,int> dir : directions){
                            int adj_row = p.first + dir.first;
                            int adj_col = p.second + dir.second;
                            if(checkBound(adj_row, adj_col, row, col) && !vis[adj_row][adj_col] && grid[adj_row][adj_col] == '1'){
                                q.push({adj_row, adj_col});
                                vis[adj_row][adj_col] = true;
                            }
                        }
                    }
                }
            }
        }
        return no_of_islands;
    }
};
