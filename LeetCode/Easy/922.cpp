vector<int> sortArrayByParityII(vector<int>& A) {
    map<int,int> mp;
    int even_pos = 0;
    int odd_pos = 1;
    for(int i=0;i<A.size();i++){
        if(A[i]%2==0){
            mp[even_pos] = A[i];
            even_pos+=2;
        }
        else{
            mp[odd_pos] = A[i];
            odd_pos+=2;
        }
    }
    A.erase(A.begin(), A.end());
    for(auto it = mp.begin();it!=mp.end();it++){
        A.push_back(it->second);
    }
    return A;
}
