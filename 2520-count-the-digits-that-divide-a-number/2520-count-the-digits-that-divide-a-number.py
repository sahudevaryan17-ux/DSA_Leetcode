class Solution:
    def countDigits(self, num: int) -> int:
        count = 0
        n = num

        while n > 0:
            r = n % 10

            if r != 0 and num % r == 0:
                count += 1

            n //= 10

        return count