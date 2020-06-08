vector<int> findDisappearedNumbers(vector<int>& nums) {
    map<int, int> mp;
    for(int i=0;i<nums.size();i++){
        mp[i+1] = 0;
    }
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    map<int,int> :: iterator it;
    nums.clear();
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second==0){
            nums.push_back(it->first);
        }
    }
    return nums;
}
