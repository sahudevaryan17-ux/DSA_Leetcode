class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        int maxi = a[0];
        int mini = a[0];
        int ans = abs(a[0]);

        for (int i = 1; i < a.size(); i++) {
            int x = a[i];

            maxi = max(x, maxi + x);
            mini = min(x, mini + x);

            ans = max(ans, max(abs(maxi), abs(mini)));
        }

        return ans;
    }
};