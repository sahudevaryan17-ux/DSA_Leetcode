class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = INT_MAX;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            // left half sorted
            if (nums[start] <= nums[mid]) {
                ans = min(ans, nums[start]);
                start = mid + 1;
            }

            // right half sorted
            else {
                ans = min(ans, nums[mid]);
                end = mid - 1;
            }
        }

        return ans;
    }
};