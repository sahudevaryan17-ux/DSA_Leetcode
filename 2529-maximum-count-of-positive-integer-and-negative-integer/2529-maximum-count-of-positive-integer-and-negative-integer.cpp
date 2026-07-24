class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n =nums.size();
        int count1 = 0,count2 = 0;
        int ans;
        for(int i = 0; i<n; i++){
            if(nums[i] < 0)  count1++;
            else if(nums[i] > 0) count2++;

        }   

        ans = max(count1,count2);
        return ans;
        
    }
};