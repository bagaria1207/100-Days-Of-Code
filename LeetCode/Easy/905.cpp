vector<int> sortArrayByParity(vector<int>& A) {
    for(auto it = A.begin();it!=A.end();it++){
        int val = *it;
        if(val%2==0){
            A.erase(it);
            A.insert(A.begin(), val);
        }
    }
    return A;
}
