class Solution {
public:
     void fun(int idx, vector<int>& candidates,
             vector<int>& temp,
             int target,
             vector<vector<int>>& ans) {
                //base case : vahi purana 
                if(target < 0){
                    return ;
                }
                if(target == 0){
                    ans.push_back(temp);
                    return ;
                }
                //isme jo major problenm h vo hai duplicates wala 
                for(int i = idx; i<candidates.size();i++){
                    if(i > idx && candidates[i] == candidates[i-1] ) continue;
                    temp.push_back(candidates[i]);
                    fun(i+1,candidates,temp,target-candidates[i],ans);
                    temp.pop_back();
                    
                
                }
             }
                                     
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
         vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
         fun(0,candidates,temp,target,ans);
         return ans;
    }
};