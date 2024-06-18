class Solution {
public:
    using int2 = pair<int,int>;
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        const int n = difficulty.size();
        const int m = worker.size();
        vector<int2> dp(n);
        for(int i = 0;i<n;i++){
            dp[i] = {difficulty[i],profit[i]};
        }

        sort(dp.begin(),dp.end());
        sort(worker.begin(),worker.end());

        int maxpr = 0, bestpr = 0, in = 0;
        for(int i = 0;i<m;i++){
            while(in < n && worker[i] >= dp[in].first){
                bestpr = max(bestpr , dp[in].second);
                in++;
            }
            maxpr += bestpr; 
        }
    return maxpr;
    }
};