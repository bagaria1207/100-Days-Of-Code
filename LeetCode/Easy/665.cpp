bool checkPossibility(vector<int>& nums) {
    bool posibility = false;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            if(posibility){
                return false;
            }
            posibility = true;
            if(i==0 || nums[i+1] >= nums[i-1]){
                nums[i] = nums[i+1];
            }
            else{
                nums[i+1]=nums[i];
            }
        }
    }
    return true;
}
