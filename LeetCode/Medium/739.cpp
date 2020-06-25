class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        stack<int> st;
        vector<int> answer(n, 0);
        for (int i = 0; i < n; ++i) {
            while (!st.empty() and T[st.top()] < T[i]) {
                int j = st.top(); st.pop();
                answer[j] = i - j;
            }
            st.push(i);
        }
        return answer;
    }
};
