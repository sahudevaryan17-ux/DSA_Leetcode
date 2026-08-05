class Solution {
public:

    void fun(int idx,
             int target,
             vector<int>& candidates,
             vector<vector<int>>& ans,
             vector<int>& temp) {

        // Base Case: Target achieved
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        // Try every element from current index
        for (int i = idx; i < candidates.size(); i++) {

            // Skip duplicate elements
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;

            // Since array is sorted, no need to continue
            if (candidates[i] > target)
                break;

            // Take current element
            temp.push_back(candidates[i]);

            // Move to next index (cannot reuse same element)
            fun(i + 1, target - candidates[i], candidates, ans, temp);

            // Backtrack
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        // Sort to handle duplicates
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> temp;

        fun(0, target, candidates, ans, temp);

        return ans;
    }
};