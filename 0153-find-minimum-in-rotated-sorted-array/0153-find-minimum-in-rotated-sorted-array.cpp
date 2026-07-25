class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        if (nums[0] <= nums[n - 1])
            return nums[0];

        int start = 0;
        int end = n - 1;

        while (start < end) {

            int mid = start + (end - start) / 2;

            if (nums[0] <= nums[mid]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
             mid = start + (end - start) / 2;
        }

        return nums[start];
    }



    
};