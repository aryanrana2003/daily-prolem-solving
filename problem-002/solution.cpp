class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> wines;
         unordered_map<int,int>looses;
        set<int> players;

        for(auto match : matches){
            int winner = match[0];
            int looser = match[1];

            wines[winner]++;
            looses[looser]++;
        players.insert(winner);
        players.insert(looser);
        }
        vector<int> lost_ones;
        vector<int> not_lost;


        for(auto player : players){
            if(looses.find(player)== looses.end()){
                not_lost.push_back(player);
            }
        }
        for(auto it : looses){
            if(it.second == 1){
                lost_ones.push_back(it.first);
            }
        }

     sort(not_lost.begin(), not_lost.end());
    sort(lost_ones.begin(), lost_ones.end());
        return {not_lost,lost_ones};
    }
};