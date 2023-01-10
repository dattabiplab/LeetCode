class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        int ans;
        ans = first;
        res.push_back(ans);
        for(int i=0;i<encoded.size();i++)
        {
            ans = res[i] ^ encoded[i];
            res.push_back(ans);
        }
        return res;
    }
};