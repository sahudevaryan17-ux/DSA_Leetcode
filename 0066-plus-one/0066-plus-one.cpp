class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for (int i = digits.size() - 1; i >= 0; i--) {//last se leke first tak!!!

            if (digits[i] < 9) {//jab digit array ka koi element 9 se kam ho 
                digits[i]++;//digit ko incerse karo 9 ---> 10 .
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};