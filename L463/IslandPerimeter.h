//Island Perimeter

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int height = grid.size();
        if(height == 0) return 0;
        int width = grid[0].size();
        unordered_map<int,int> hash;
        int island = 0;
        int repeat = 0;
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                if(grid[i][j] == 1) {
                    island++;
                    if(i<height-1 && grid[i+1][j]) repeat++;
                    //int left = (j==0)?0:grid[i][j-1];
                    if(j<width-1 && grid[i][j+1]) repeat++;
                    //hash[above+below+left+right] += 1;
                }
            }
        }
        //return hash[0]*4+hash[1]*3+hash[2]*2+hash[3]*1;
        return island*4 - repeat*2;
    }
};