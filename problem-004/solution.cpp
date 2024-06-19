class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();


        vector <pair<int, int>> ls(n);
        for (int i = 0; i < n; ++i) {
            ls[i] = {profits[i], capital[i]};
        }

        sort(ls.begin(), ls.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });

        priority_queue<int> PQ;
        int j = 0;

        while (k--) {
            while (j < n && ls[j].second <= w) {
                PQ.push(ls[j].first);
                ++j;
            }

            if (PQ.empty()) break;

            w += PQ.top();
            PQ.pop();
        }

        return w;
    }
};