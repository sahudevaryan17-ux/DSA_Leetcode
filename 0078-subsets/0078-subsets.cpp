class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans = {{}};

        for (int num : nums) {
            int n = ans.size();
            for (int i = 0; i < n; i++) {
                vector<int> temp = ans[i];
                temp.push_back(num);//each value of array is stored in temp
                ans.push_back(temp);//temp ki value stored in ans
            }
        }

        return ans;
    }
};