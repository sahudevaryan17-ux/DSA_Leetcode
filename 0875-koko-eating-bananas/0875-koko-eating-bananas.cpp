class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int start = 1;
        int end = *max_element(piles.begin(), piles.end());

        while (start < end) {

            int mid = start + (end - start) / 2;
            long long time = 0;

            for (int i : piles) {

                time += i / mid;

                if (i % mid != 0) {
                    time++;
                }

                if (time > h)
                    break;
            }

            if (time <= h) {
                end = mid;
            }
            else {
                start = mid + 1;
            }
        }

        return start;
    }
};