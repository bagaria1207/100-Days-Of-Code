vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    vector<int> res;
    int i=0;
    int flag=0;
    for(auto it2 = arr2.begin();it2!=arr2.end();it2++){
        for(auto it1 = arr1.begin();it1!=arr1.end();it1++){
            if(*it2 == *it1){
                arr1.erase(it1);
                arr1.insert(arr1.begin()+i, *it2);
                i++;
                flag++;
            }
        }
    }
    for(auto it1 = arr1.begin()+flag;it1!=arr1.end();it1++){
        res.push_back(*it1);
    }
    arr1.erase(arr1.begin()+flag, arr1.end());
    sort(res.begin(), res.end());
    for(auto it1 = res.begin();it1!=res.end();it1++){
        arr1.push_back(*it1);
    }
    return arr1;
}



/*
Optimised Solution Below Using Pair and Map
*/
vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    typedef pair<int,bool> PAIR;
    map<int, PAIR> mp;
    vector<int> res;
    int waste;

    for(int i=0;i<arr1.size();i++){
        mp[arr1[i]].first++;
    }

    for(int i=0;i<arr2.size();i++){
        waste = mp[arr2[i]].first;
        mp[arr2[i]].second = true;
        for(int j=0;j<waste;j++){
            res.push_back(arr2[i]);
        }
    }

    map<int, PAIR>::iterator it;

    for(it = mp.begin();it!=mp.end();it++){
        if(it->second.second == false){
            waste = it->second.first;
            for(int i=0;i<waste;i++){
                res.push_back(it->first);
            }
        }
    }

    return res;
}
