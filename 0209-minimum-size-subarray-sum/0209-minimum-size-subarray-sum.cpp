class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int i = 0;              // window ka start
        int j = 0;              // window ka end
        int sum = 0;            // current window ka sum
        int res = INT_MAX;      // minimum length store karega

        while (j < n) {

            sum += nums[j];     // right element ko window me add karo

            // target mil gaya, ab window ko chhota karo
            while (sum >= target) {

                int len = j - i + 1;    // current window ki length
                res = min(res, len);    // minimum length update

                sum -= nums[i];         // left element remove karo
                i++;                    // window ko right shift karo
            }

            j++;                // next element add karne ke liye
        }

        // target achieve nahi hua
        if (res == INT_MAX)
            return 0;

        return res;
    }
};