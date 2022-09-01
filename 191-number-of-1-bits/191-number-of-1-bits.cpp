class Solution {
public:
    int hammingWeight(uint32_t n) {
             // 1st method
        // int count = __builtin_popcount(n);
        // return count;
        
            // 2nd method
        int count=0;
        while(n!=0){
           if(n&1) count++;
            n>>=1;
        }
        return count;
    }
};