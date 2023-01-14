class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt=0;
        for(auto i=0;i<nums.size();i++)
        {
            for(auto j=i+1;j<nums.size();j++)
            {
                for(auto k=j+1;k<nums.size();k++)    
                {
                    if(nums[k]-nums[j] == diff)
                    {
                        if(nums[j]-nums[i] == diff) cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};