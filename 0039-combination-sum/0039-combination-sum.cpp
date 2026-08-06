class Solution {
public:
    void fun(int idx,int target,vector<int>& cand,vector<int>& temp,vector<vector<int>>& ans){
        //base case
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        //2nd base case: out of boundry and niggative
        if(idx == cand.size() || target<0){
            return;
        }
        //len-den karo
        temp.push_back(cand[idx]);
        //bar bar ye elemnt aaye jabtak target 0 na ho jaye :) tabhi idx only
        fun(idx,target-cand[idx],cand,temp,ans);
        //backtrack: ghar more pardesiya xD
        temp.pop_back();
        //vapas bulava aaya hai , aage ghar ko jana hai :(
        fun(idx+1,target,cand,temp,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& cand, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        fun(0,target,cand,temp,ans);
        return ans;
    }
};//bas isi tarah se karna hai ohhhhhhh :)