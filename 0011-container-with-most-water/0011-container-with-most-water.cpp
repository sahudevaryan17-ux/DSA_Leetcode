class Solution {
public:
    int maxArea(vector<int>& nums) {//hame chahiye maximum area
      int max_area = 0;
       int i = 0;
       int j = nums.size() - 1;
       while(i < j){
                int width = j - i;
                int ht = min (nums[i] , nums[j]);
                int area = ht* width;
                max_area = max(max_area , area);
                if(nums[i] < nums[j]){ //agar agla element pechle se bada hai to agle pr move kar jao;
                    i++;
                }
                else j--;

       } 
        
          return max_area;
    }
};