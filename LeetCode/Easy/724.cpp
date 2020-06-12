int pivotIndex(vector<int>& nums) {
        if(nums.size() == 0){
            return -1;
        }
        int total = 0;
        for(int t : nums){
            total += t;
        }
        int leftSum = 0;
        for(int i=0;i<nums.size();i++){
            if(leftSum == (total - nums[i]))
                return i;
            else{
                leftSum +=nums[i];
                total -= nums[i];
            }
        }
        return -1;
    }

int pivotIndex(vector<int>& nums) {
    int leftSum = 0;
    bool flag = false;
    int rightSum = 0;
    int pivot = INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(i==0){
            leftSum=0;
        }
        else{
            leftSum+=nums[i-1];
        }
        rightSum=0;
        for(int j=nums.size()-1;j>i;j--){
            rightSum+=nums[j];
        }
        cout<<"LeftSum :: "<<leftSum<<" RightSum :: "<<rightSum<<"\n";
        if(leftSum==rightSum){
            pivot = i;
            flag = true;
            break;
        }
    }
    if(flag == true){
        return pivot;
    }
    else{
        return -1;
    }
}
