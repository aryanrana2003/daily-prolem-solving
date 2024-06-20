class Solution {
public:

    bool canplaceball(int x,vector<int> &position,int m){
        int precballs = position[0];
        int ballsplaced = 1;
        for(int i = 1;i<position.size() && ballsplaced < m;i++){
            int currpos = position[i];
            if(currpos - precballs >= x){
                precballs = position[i];
                ballsplaced +=1;
                precballs = currpos;
            }
        }
        return ballsplaced == m;
    }


    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        int ans = 0;
        sort(position.begin(),position.end());
        int low =1;
        int high = ceil(position[n-1]) / (m-1);
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(canplaceball(mid,position,m)){
                 ans = mid;
                low = mid+1;
            }
            else{
                high = mid - 1;
                }

        }
        return ans;
    }
};