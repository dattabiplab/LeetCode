class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=-1,count;
        for(int i=0;i<sentences.size();i++)
        {
            count =1;       // no. of words is +1 greater then spaces
            for(int j=0;j<sentences[i].length();j++)
            {
            if(sentences[i][j]==' ') count++;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};