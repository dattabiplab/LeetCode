class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n = a.size();
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum>maxi) maxi=sum;
             if(sum<0) sum=0;         
        }
        // if(maxi<0) maxi=0;
        return maxi;
    }
};