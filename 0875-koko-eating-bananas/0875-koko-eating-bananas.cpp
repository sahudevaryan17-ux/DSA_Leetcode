class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int start = 1;
        int end = *max_element(piles.begin(), piles.end());

        while (start < end) {

            int speed = start + (end - start) / 2;
            long long time = 0;

            for (int kela : piles) {

                time += kela / speed;

                if (kela % speed != 0) {
                    time++;
                }

                if (time > h)
                    break;
            }

            if (time <= h) {
                end = speed;
            }
            else {
                start = speed + 1;
            }
        }

        return start;
    }
};