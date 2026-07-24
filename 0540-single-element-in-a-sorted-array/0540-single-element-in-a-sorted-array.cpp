class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    int n =  nums.size();
    int start = 0;
    int end = n-1;
    if(n == 1){
        return nums[0];
    }

    while(start <= end){
        int mid = start +(end - start)/2;
        
         if(mid == 0 && nums[0] != nums[1]) return nums[mid];
          if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[mid];




        if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]){
            //agar agal bagal ka elemnt same na ho to vahi element ko return karo
            return nums[mid];
        }
        if(mid % 2 == 0){
         if(nums[mid] == nums[mid-1]){
            //left
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
     }
     else{
        if(nums[mid-1] == nums[mid]){
            //right
             start = mid + 1;
        }
        else{
           end = end - 1;
        }

     }
    }
    
    return nums[start];
        
    }
};