bool canBeEqual(vector<int>& target, vector<int>& arr) {
    sort(arr.begin(), arr.end());
    sort(target.begin(), target.end());
    int flag = 0;
    for(int i = 0;i<arr.size();i++){
        if(target[i]==arr[i]){
            flag++;
        }
    }
    if(flag == arr.size()){
        return true;
    }
    else{
        return false;
    }
}
