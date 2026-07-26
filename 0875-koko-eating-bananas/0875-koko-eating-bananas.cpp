class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int start = 1;
        int end = *max_element(piles.begin(), piles.end());
        int ans = end;

        while (start <= end) {

            int mid = (start + end) / 2;
            long long time = 0;

            for (int i = 0; i < piles.size(); i++) {
              time += (piles[i] + mid - 1) / mid;
                 if (time > h)
                    break;
            }

            if (time <= h) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};