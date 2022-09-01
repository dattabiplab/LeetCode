class Solution {
public:
    int bitwiseComplement(int n) {
            // 1st method
	// if(n==0) return 1;
	// if(n==1) return 0;
	// int ans=0,i=0;
	// while(n!=0){
	// 	if(n&1); //ans+=floor(pow(2,i)); [since multiplying ~1 =0 is not necessary]
	// 	else ans+=floor(pow(2,i)); 
	// 	i++;
	// 	n>>=1;
	// }
	// return ans;
        
            // 2nd method
        if(n==0) return 1;
        int m =n;
        int mask =0;
        while(m!=0){
            mask = (mask<<1) | 1;
            m>>=1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};