class Solution {
public:
    int majorityElement(vector<int>& nums) {
          int num=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(c==0) num=nums[i];
            if(nums[i]==num) c++;
            else c--;
        }
        return num;
    }
};