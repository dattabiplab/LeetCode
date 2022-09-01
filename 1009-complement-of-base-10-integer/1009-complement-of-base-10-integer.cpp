class Solution {
public:
    int bitwiseComplement(int n) {
    if(n==0) return 1;
    if(n==1) return 0;
	int ans=0,i=0;
	while(n!=0){
		if(n&1); //ans+=floor(pow(2,i)); [since multiplying ~1 =0 is not necessary]
		else ans+=floor(pow(2,i)); 
		i++;
		n>>=1;
	}
	return ans;
    }
};