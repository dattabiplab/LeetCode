class Solution {
public:
    void sortColors(vector<int>& n) {
        int size = n.size();
        int s=0,m=0,e=size-1;
        while(m<=e)
        {
            if(n[m]==2)
            {
                swap(n[m],n[e]);
                e--;
            }
            else if(n[m]==1)
            {
               m++;
            }
            else
            {
                swap(n[m],n[s]);
                m++; s++;
            }
        }
    }
};