class Solution {
public:

    // Recursive function
    void fun(string &digits, int n, int idx,
             string &diary,
             vector<string> &res,
             unordered_map<char,string> &mp)
    {
        // If all digits are used,
        // store the current answer.
        if(idx == n){
            res.push_back(diary);
            return;
        }

        // Get all letters of the current digit.
        string choices = mp[digits[idx]];

        // Try every letter.
        for(int i = 0; i < choices.size(); i++){

            // Add one letter.
            diary.push_back(choices[i]);

            // Go to the next digit.
            fun(digits, n, idx + 1, diary, res, mp);

            // Remove the last letter
            // to try another one.
            diary.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        // No digits -> no answer.
        if(digits.empty())
            return {};

        // Digit to letters mapping.
        unordered_map<char,string> mp;

        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        // Stores all answers.
        vector<string> res;

        // Current combination.
        string diary = "";

        // Start recursion.
        fun(digits, digits.size(), 0, diary, res, mp);

        return res;
    }
};