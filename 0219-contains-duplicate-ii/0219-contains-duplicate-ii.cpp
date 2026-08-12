class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();

        if(k == 0) return false;

        unordered_map<int, int> m;

        int low = 0;

        for(int high = 0; high < n; high++) {

            m[nums[high]]++;

            if(m[nums[high]] > 1)
                return true;

            if(high - low == k) {
                m[nums[low]]--;
                low++;
            }
        }

        return false;
    }
};