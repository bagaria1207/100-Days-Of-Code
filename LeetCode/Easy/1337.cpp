typedef pair<int,int> PAIR;
struct comp {
    bool operator()(const PAIR& x, const PAIR& y) const {
        if (x.second != y.second)
            return x.second < y.second;

        return x.first < y.first;
    }
};

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    vector<int> res;
    vector<PAIR> vp;
    for(int i=0;i<mat.size();i++){
        int cnt = 0;
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j]==1){
                cnt++;
            }
        }
        vp.push_back(make_pair(i,cnt));
    }
    sort(vp.begin(), vp.end(), comp());
    for(int i=0;i<k;i++){
        res.push_back(vp[i].first);
    }
    return res;
}

/*
Optimised By 4ms
*/

typedef pair<int,int> PAIR;
static bool compare(PAIR& x,PAIR& y){
    if (x.second != y.second)
        return x.second < y.second;

    return x.first < y.first;
}

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    vector<int> res;
    vector<PAIR> vp;
    for(int i=0;i<mat.size();i++){
        int cnt = 0;
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j]==1){
                cnt++;
            }
        }
        vp.push_back(make_pair(i,cnt));
    }
    sort(vp.begin(), vp.end(), compare);
    for(int i=0;i<k;i++){
        res.push_back(vp[i].first);
    }
    return res;
}
