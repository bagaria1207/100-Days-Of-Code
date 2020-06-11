vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
    int n = nums.size();
    int m = nums[0].size();
    if(n*m!=r*c){
        return nums;
    }
    vector<vector<int>> newMatrix(r,vector<int> (c,0));
    int row = 0;
    int col = 0;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<nums[i].size();j++)
        {
            newMatrix[row][col] = nums[i][j];
            col++;
            if(col==c){
                row++;
                col=0;
            }
        }
    }
    return newMatrix;
}
