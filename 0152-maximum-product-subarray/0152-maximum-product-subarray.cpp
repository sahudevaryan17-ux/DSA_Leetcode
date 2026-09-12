class Solution {
public:
    int maxProduct(vector<int>& a) {
        int maxi = a[0];
        int mini = a[0];
        int ans = a[0];
            for(int i = 1 ; i < a.size() ; i++ ){
                int x = a[i];
                int c1 = maxi * x;
                int c2 = mini * x;
                maxi = max(x , max(c1,c2));
                mini = min(x , min(c1,c2));
                ans = max(ans , maxi);
            }
            return ans;
    }
};