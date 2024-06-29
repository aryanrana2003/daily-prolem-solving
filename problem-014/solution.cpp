class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> hash;

    for(auto it: edges){
        hash[it[0]]++;
        hash[it[1]]++;
    }
    
    for(auto it : hash){
        int node = it.first;
        int degree = it.second;
        if(degree == edges.size()){
            return node;
        }
    }
    return -1;
    }
};