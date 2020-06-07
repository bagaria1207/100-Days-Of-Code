vector<int> luckyNumbers (vector<vector<int>>& matrix) {
    vector<int> res;
    int pos = 0;
    for(int i=0;i<matrix.size();i++){
        int minRow = INT_MAX;
        for(int r=0;r<matrix[i].size();r++){
            if(matrix[i][r]<minRow){
                minRow = matrix[i][r];
                pos = r;
            }
        }
        int maxRow = INT_MIN;
        for(int c=0;c<matrix.size();c++){
            if(matrix[c][pos]>maxRow){
                maxRow = matrix[c][pos];
            }
        }
        if(maxRow==minRow){
            res.push_back(maxRow);
        }
    }
    return res;
}
