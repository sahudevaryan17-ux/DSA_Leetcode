class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int res = 0;
        unordered_map<char, int> m;

        for(int right = 0; right < s.size(); right++) {
            
            m[s[right]]++;
            
            while(m[s[right]] > 1){//duplicate
                m[s[low]]--;
                low++;
            }
            
            int len = right - low + 1;
            res = max(res,len);
            
        }

        return res;
    }
};