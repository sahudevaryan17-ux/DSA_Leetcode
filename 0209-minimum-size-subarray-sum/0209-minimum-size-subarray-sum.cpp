class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low = 0 , high = 0;
        int res = INT_MAX , sum = 0;

        //hire and fire

        while(high < n){
            sum = sum + nums[high]; //hire
            while(sum >= target){
                int len = high - low + 1;
                res = min(res,len);
                sum = sum - nums[low];
                low++;
            }            
            high++;
        }
          // target achieve nahi hua
        if (res == INT_MAX)
            return 0;

        return res;
    }
};