class Solution {
public:
    int findMin(vector<int>& nums) {

        unordered_map<int, int> mp;

        // frequency store karo
        for (int x : nums) {
            mp[x]++;
        }

        int mini = INT_MAX;

        // hashmap ki keys me minimum dhundo
        for (auto it : mp) {
            mini = min(mini, it.first);
        }

        return mini;
    }
};