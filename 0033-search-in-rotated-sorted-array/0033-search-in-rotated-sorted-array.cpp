class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
//agar mid wla hi ans hai to usko return karo
            if (nums[mid] == target) return mid;

            // left half is sorted// mid se chhota ya pehle 
            if (nums[start] <= nums[mid]) {
//starting element chhota hai target se and // target mid se chhota hai// start <-----target----->mid
                if (nums[start] <= target && target <= nums[mid]) {
                    end = mid - 1;      // target is in left half -> shrink towards it
                } else {
                    start = mid + 1;    // target must be in right half
                }
            }
            // right half is sorted
            else {
                //mid <-----target----->end
                if (nums[mid] <= target && target <= nums[end]) {
                    start = mid + 1;    // target is in right half -> shrink towards it
                } else {
                    end = mid - 1;      // target must be in left half
                }
            }
        }

        return -1;
    }
};