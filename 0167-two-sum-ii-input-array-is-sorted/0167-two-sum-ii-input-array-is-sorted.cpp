class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        vector<int>ans;

        while(start < end){
            int sum = nums[start] + nums[end];
            if( sum == target) {
                ans.push_back(start + 1);//start se ek aage ka index dega
                ans.push_back(end + 1);
                break;
            }
            else if(sum > target) end--;//sum bada aa jaye to bade elemnet ke iterator ko peeche bhejenge
            else start ++;
        }
        return ans;
    }
};