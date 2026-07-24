class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        //lower bound
        int lb = n;
        while(start <= end) {
            int mid = (start + end)/2;
            if(nums[mid] >= target){
                lb = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
           
        }
         if(lb == n || nums[lb] != target){ //agar lb array ke size se bada ho jaye yaa vo elemnt exist hi na kare to ye return karna hai
                return{-1,-1};
            }




        start = 0;
        end = n-1;
        int ub = n;
         while(start <= end) {
            int mid = (start + end)/2;
            if(nums[mid] > target){
                ub = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
     
        }
        return {lb,ub-1};
    }

};