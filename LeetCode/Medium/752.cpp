class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead_hash(deadends.begin(), deadends.end());
        unordered_set<string> visited;
        queue<string> q;
        if(dead_hash.find("0000") != dead_hash.end()){
            return -1;
        }
        int level = 0;
        q.push("0000");
        visited.insert("0000");
        while(!q.empty()){
            int size = q.size();
            for(int i = 0;i<size;i++){
                string current = q.front();
                q.pop();
                if(current == target){
                    return level;
                }
                for(int j = 0;j < 4;j++){
                    char temp = current[j];
                    current[j] = temp == '9' ? '0' : temp + 1;
                    if(dead_hash.find(current) == dead_hash.end() && visited.find(current) == visited.end()){
                        q.push(current);
                        visited.insert(current);
                    }
                    current[j] = temp == '0' ? '9' : temp - 1;
                    if(dead_hash.find(current) == dead_hash.end() && visited.find(current) == visited.end()){
                        q.push(current);
                        visited.insert(current);
                    }
                    current[j] = temp;
                }
            }
            level++;
        }
        return -1;
    }
};
