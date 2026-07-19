class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int product;
        vector<int>ans;
        for(int i = 0 ; i< n ; i++){
             product = nums[i] * nums[i]; 
             ans.push_back(product);
             

        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};