class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += nums[i];
        }
        for(int i = 0; i<n; i++){
           
           int right = sum - left - nums[i];//right wala part ka sum check karta hai
            if(left == right){
                return i;
            }
             left += nums[i];//left wale ka sum current index ke pehle ka sum
        }
        return -1;
    }
};