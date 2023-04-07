//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            if(A==B) return "-1";
            int a1[26] = {0};
            int a2[26] = {0};
            for(auto it:A) a1[it-'a']++;
            for(auto it:B) a2[it-'a']++;
            string ans = "";
            for(int i=0;i<26;i++)
            {
                if((a1[i]!=0 && a2[i]==0) || (a1[i]==0 && a2[i]!=0))
                {
                    // ans = "";
                    ans+=char(i+'a');
                }
            }
                
            if(ans=="") return "-1";
            else return ans;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends