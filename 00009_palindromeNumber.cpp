class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) {
                return false;
            }
            long long reversed = 0;
            long long temporary = x;
            int digit = 0;
            while (temporary != 0) {
                digit = temporary % 10;
                reversed = reversed * 10 + digit;
                temporary /= 10;
            }
            return reversed == x;
        }
};