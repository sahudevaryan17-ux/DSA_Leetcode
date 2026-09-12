class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int bestend = nums[0] ;
       int ans = nums[0];
       for(int i = 1 ; i < nums.size() ; i++){
        int c1 = bestend + nums[i];
        int c2 = nums[i];
        bestend = max(c1,c2);
        ans = max(bestend , ans);
       }
       return ans;
    }
};