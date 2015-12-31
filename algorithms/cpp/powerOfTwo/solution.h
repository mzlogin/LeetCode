class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool result = false;
        while (n > 0) {
            if (n == 1) {
                result = true;
                break;
            } else if ((n & 1) == 1) {
                break;
            }

            n = n >> 1;
        }

        return result;
    }
};
