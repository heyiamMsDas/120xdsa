class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size() ;
        int n = grid[0].size() ;
        int count  = 0 ; 
        // directions up , down , right , left (row , cols) 
        vector<pair<int,int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j< n ;  j++ ){

                if(grid[i][j] == '1') {
                    count++  ;

                    queue<pair<int,int>>q ;

                    q.push({i , j}) ; // push the index

                    grid[i][j] = '0' ; // mark as visited 

                    while(!q.empty()) {
                        auto [x,y] = q.front() ;

                        q.pop() ;

                        for(auto [dx , dy] : directions) {

                            int nx = x + dx ;
                            int ny = y + dy ;

                            if(nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == '1') {

                                q.push({nx , ny}) ;

                                grid[nx][ny] = '0' ;

                            }

                        }

                    }

                }


            }
        }

        return count ;






    }
};
