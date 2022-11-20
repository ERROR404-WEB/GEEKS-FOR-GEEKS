//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        int i,j,maxx=0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(i=0;i<n;i++) 
        {
            for(j=0;j<m;j++)
            {
                if(s1[i]==s2[j])
                dp[i+1][j+1]=dp[i][j]+1;
                maxx=max(dp[i+1][j+1],maxx);
            }
        }
       
        return maxx;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends