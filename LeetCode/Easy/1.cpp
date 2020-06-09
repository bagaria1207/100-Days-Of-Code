vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    if(!nums.size()){
        res.push_back(0);
    }
    map<int,int> mp;
    int x;
    for(int i=0;i<nums.size();i++){
        x=target-nums[i];
        auto it = mp.find(x);
        if(it!=mp.end()){
            res.push_back(i);
            res.push_back(it->second);
        }
        mp[nums[i]]=i;
    }
    return res;
}
