class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int n = a.size();
      
        int ans = 0;
        for(int i = 0; i < n ; i++){
              int sum = 0;
            for(int j = 0; j < a[i].size(); j++){
                sum +=  a[i][j]; 
            }
            ans = max(ans , sum);
        }
        return ans;
    }
};