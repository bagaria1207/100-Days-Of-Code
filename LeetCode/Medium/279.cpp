class Solution {
public:
    int numSquares(int n) {
        queue<int> bfs;
        unordered_set<int> visited;
        vector<int> perfectSquare;
        int level = 1;
        for(int i = 1;i*i <= n;i++){
            int aux = i*i;
            if(aux == n){
                return level;
            }
            bfs.push(aux);
            visited.insert(aux);
            perfectSquare.push_back(aux);
        }
        while(!bfs.empty()){
            level++;
            int q_size = bfs.size();
            for(int i = 0;i < q_size; i++){
                int aux = bfs.front();
                for(int num : perfectSquare) {
                    int sum = aux + num;
                    if(sum == n){
                        return level;
                    }
                    if(sum < n && !visited.count(sum)){
                        bfs.push(sum);
                        visited.insert(sum);
                    }
                }
                bfs.pop();
            }
        }
        return -1;
    }
};
