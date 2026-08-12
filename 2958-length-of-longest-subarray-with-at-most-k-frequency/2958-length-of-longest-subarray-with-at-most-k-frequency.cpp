class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
       int n = nums.size();
       int low = 0;
       int res = 0;
       unordered_map<int,int>m;
        for(int x = 0; x < n; x++){

            m[nums[x]]++;

            while(m[nums[x]] > k){//agar freq k se jada 
                m[nums[low]]--;//pichle ko remove karte jao
                low++;
            }
            int len = ( x - low + 1 );
            res = max ( res , len );
        }
       
       return res;
    }
};