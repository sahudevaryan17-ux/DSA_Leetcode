class Solution {
public:
//helper function//solved recursively
    int bs(vector<int>& nums, int target,int start,int end){
        if(start <= end){
            int mid = start + (end - start) /2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] <= target){ //right side
                return bs(nums,target,mid+1,end);
            }
            else{
                 return bs(nums,target,start,mid-1);
            }
        }
        return -1;

    } 
    int search(vector<int>& nums, int target) {
         return bs(nums,target,0,nums.size()-1);
    }
};