class Solution {
public:
 void fun(int idx, int n,vector<int>& nums,vector<int>& temp,vector<vector<int>>&ans){
    //Base Case : Jab saare elements khatam ho jaye to sabko push kardo
    if(idx == n){
        ans.push_back(temp);
        return;
    }
    //ab decide karo lena hai ki nahi 
    temp.push_back(nums[idx]);
    fun(idx+1,n,nums,temp,ans);

    //backtrack : peeche bhago to try another possibility
    temp.pop_back();
    fun(idx+1,n,nums,temp,ans);
 }
    vector<vector<int>> subsets(vector<int>& nums) {
           vector<vector<int>> ans;
        vector<int> temp;

        fun(0,nums.size(),nums,temp,ans);
        return ans;
        
    }
};