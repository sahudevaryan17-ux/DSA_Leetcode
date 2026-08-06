class Solution {
public:
    void fun(vector<int>& nums,
             vector<int>& temp,
             vector<vector<int>>& ans,
             vector<bool>& used) {

        // Base Case
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // Try every unused element
        for (int i = 0; i < nums.size(); i++) {

            // Skip if already used
            if (used[i])
                continue;

            // TAKE
            used[i] = true;
            temp.push_back(nums[i]);

            fun(nums, temp, ans, used);

            // BACKTRACK
            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> used(nums.size(), false);

        fun(nums, temp, ans, used);

        return ans;
    }
};