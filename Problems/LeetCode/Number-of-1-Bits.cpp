class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while ((n != 0)) {
            int a = n&1;
            if (a) {
                count++;
            }
            n >>= 1;
        }
        return count;
    }
};
