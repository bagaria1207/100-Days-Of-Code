int findNumbers(vector<int>& nums) {
    int cnt = 0;
    for(int t: nums){
        int numCnt = 0;
        while(t!=0){
            t = t/10;
            numCnt++;
        }
        if(numCnt%2==0){
            cnt++;
        }
    }
    return cnt;
}
