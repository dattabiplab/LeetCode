class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        map<int,int> mp;
        int s= nums.size();
        for(int i=0;i<s;i++)
        {
            int a = nums[i];
            int more = target-a;
            if(mp.find(more) != mp.end()){
                 v.push_back(mp[more]);
                 v.push_back(i);
                // return {mp[more],i};
            }
            mp[a]=i;
            
        }
        return v;
    }
};