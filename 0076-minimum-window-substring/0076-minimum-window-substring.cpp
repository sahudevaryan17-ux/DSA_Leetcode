class Solution {
public:

    bool Sahi(vector<int> have, vector<int> need) {
        for (int i = 0; i < 256; i++) {
            if (have[i] < need[i])
                return false;
        }
        return true;
    }

    string minWindow(string s, string t) {

        vector<int> need(256, 0);
        vector<int> have(256, 0);

        for (char c : t)
            need[c]++;

        int low = 0;
        int start = 0;
        int len = INT_MAX;

        for (int high = 0; high < s.size(); high++) {

            have[s[high]]++;

            while (Sahi(have, need)) {

                if (high - low + 1 < len) {
                    len = high - low + 1;
                    start = low;
                }

                have[s[low]]--;
                low++;
            }
        }

        if (len == INT_MAX)
            return "";

        return s.substr(start, len);
    }
};