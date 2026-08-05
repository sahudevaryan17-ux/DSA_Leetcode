class Solution {
public:

    void fun(int idx, vector<int>& candidates,
             vector<int>& temp,
             int target,
             vector<vector<int>>& ans) {

        // Base Case 1: Target achieved
       if(target == 0){
        ans.push_back(temp);
        return;
       }

        // Base Case 2: Out of bounds or target becomes negative
        if(idx == candidates.size() || target < 0){
            return;
        }

        // ---------------- TAKE ----------------
        // Include current element
        temp.push_back(candidates[idx]);

        // Stay at same index because we can reuse this element
        fun(idx,candidates,temp,target - candidates[idx],ans);
        // Backtrack
        temp.pop_back();

        // ---------------- DON'T TAKE ----------------
        // Move to next index
        fun(idx + 1, candidates, temp, target, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> temp;

        fun(0, candidates, temp, target, ans);

        return ans;
    }
};