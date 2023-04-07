//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
    int a1[26] = {0};
    int a2[26] = {0};
    for(auto it:str1) a1[it-'a']++;
    for(auto it:str2) a2[it-'a']++;
    int ans=0;
    for(int i=0;i<26;i++)
    {
       ans += abs(a1[i]-a2[i]);
    }
    return ans;
}