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

/*
Optimized Solution
*/

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int N = nums.size();
    vector<int> result;
    for(int i = 0; i < N; i++){
        while(nums[i] > 0 && nums[nums[i]-1] != nums[i])
            swap(nums[i],nums[nums[i]-1]);
    }
    for(int i = 0; i < N; i++)
        if(nums[i] != i+1)
            result.push_back(i+1);
    return result;
}
