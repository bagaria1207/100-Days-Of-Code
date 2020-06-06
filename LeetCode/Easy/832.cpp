vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    for(vector<int> &t : A){
        reverse(t.begin(), t.end());
    }
    for(vector<int> &t : A){
        for(int &aux : t){
            if(aux == 1){
                aux = 0;
            }
            else{
                aux = 1;
            }
        }
    }
    return A;
}
