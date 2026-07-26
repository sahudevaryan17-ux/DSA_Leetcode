class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(auto x : nums1){
            m[x]++;//freq calculate
        }
        for(auto x : nums2){
            if(m[x] > 0){ //freq greater than 0 
                ans.push_back(x);
               m[x]--;//har iteration pr delete karo
            }
            
        }
        return ans;
    }
};