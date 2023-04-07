//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            int small=0,large=0,num=0,special=0;
            for(int i=0;i<s.length();i++)
        	{
        		if(s[i]>=97 && s[i]<=122) small++;
        		else if(s[i]>=65 && s[i]<=90) large++;
        		else if(s[i]>=48 && s[i]<=57) num++;
        		else special++;
        	}
            vector<int> ans;
            ans.push_back(large);
            ans.push_back(small);
            ans.push_back(num);
            ans.push_back(special);
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends