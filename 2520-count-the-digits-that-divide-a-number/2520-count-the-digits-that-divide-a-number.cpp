class Solution {
public:
    int countDigits(int num) {
        int counter = 0;
        int n = num;
        while (n > 0){
            int dig = n % 10;
            if(dig != 0 && num % dig == 0){
                counter++;
            }
           n = n / 10;
        }
         return counter;
    }
};