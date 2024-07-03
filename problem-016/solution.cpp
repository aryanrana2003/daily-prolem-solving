class Solution {
public:
    int minDifference(vector<int>& nums) {
        int size = nums.size();
        int minVal = INT_MAX;
        sort(nums.begin(),nums.end());

        if(size<=4) return 0;

        minVal = min(minVal , nums[size-4] - nums[0]);
        minVal = min(minVal , nums[size-1] - nums[3]);
        minVal = min(minVal , nums[size - 2] - nums[2]);
        minVal = min(minVal , nums[size-3] - nums[1]);

        return minVal;

        
    }
};