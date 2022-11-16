//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        
        int i,j=0,sum=0;
       
        for(i=0;i<s.size();i++)
        {
            
             unordered_map<char,int>m;


             for(j=i;j<s.size();j++)
             {
                m[s[j]]++; 
                int minn=INT_MAX,maxx=INT_MIN;
                for(auto it:m)
                {
                    if(it.second>maxx) maxx=it.second;
                    if(it.second<minn) minn=it.second;
                }
                if(m.size()>=2) sum+=maxx-minn;
             }
            
            
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends