class Solution {
public:
    int bitwiseComplement(int n) {
        int temp = n;
        int count = 0;
        if(n==0) return 1;
        while (temp != 0) {
            count++;
            temp = temp >> 1;
        }

        int mask = (1 << count) - 1;
        return (~(n)&mask);
    }
};
