class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = __builtin_popcountll(n);
        if((n>INT_MAX) || (n<INT_MIN)) return false;
        if(ans==1) return true;
        return false;
    }
};