class Solution {
public:
    bool isPowerOfTwo(int n) {
                // 1st method
        // int ans = __builtin_popcountll(n);
        // if(ans==1) return true;
        // return false;
        
                //2nd method
        // int ans;
        // for(int i=0;i<=30;i++){
        //     ans = pow(2,i);
        //     if(ans==n) return true;
        // }
        // return false;
        
                // 3rd method
        int ans=1;
        for(int i= 0;i<=30;i++){
            if(ans==n) return true;
            if(ans<INT_MAX/2) ans*=2;
        }
        return false;
    }
};