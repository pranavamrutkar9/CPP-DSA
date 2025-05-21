class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1)
            return true;
        else if (n <= 0 || n % 2 != 0)
            return false;
        else {
            while (n != 1) {
                int bit = n & 1;
                if (bit == 1)
                    return 0;
                n = n >> 1;
            }
            return true;
        }
    }
};
