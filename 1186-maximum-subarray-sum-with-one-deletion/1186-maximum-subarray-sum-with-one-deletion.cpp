class Solution {
public:
    int maximumSum(vector<int>& a) {
        int maxi = a[0];
        int onedel = INT_MIN;
        int ans = a[0];

        for (int i = 1; i < a.size(); i++) {
            int prev_maxi = maxi;
            int prev_onedel = onedel;

            maxi = max(prev_maxi + a[i], a[i]);

            if (prev_onedel == INT_MIN)
                onedel = prev_maxi;
            else
                onedel = max(prev_onedel + a[i], prev_maxi);

            ans = max(ans, max(maxi, onedel));
        }

        return ans;
    }
};
