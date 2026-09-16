class Solution {
public:
    bool checkDivisibility(int n) {
        int dibba = n;
        int sum = 0;
        int prod = 1;
        while(n>0){
            int dig = n%10;
            sum += dig;
            prod *= dig;
            n /= 10; 
        }
        return dibba % (sum + prod) == 0;
    }
};