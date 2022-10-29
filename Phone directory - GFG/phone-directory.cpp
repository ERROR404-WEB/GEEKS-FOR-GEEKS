//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        vector<vector<string>>v(s.size());
        vector<string>prefix;
        int i,j,k;
        string ss="";
        for(i=0;i<s.size();i++){
            ss+=s[i];
            prefix.push_back(ss);
        }
        map<string,int>m;
        for(int i=0;i<n;i++) m[contact[i]]++;
        
        j=0;
        
        for(auto i:m) contact[j++]=i.first;
        n=m.size();
        for(i=0;i<prefix.size();i++)
        {
            vector<string>vv;
            for(j=0;j<n;j++)
            {
                string sss=contact[j].substr(0,i+1);
                if(prefix[i]==sss) vv.push_back(contact[j]);
            }
            sort(vv.begin(),vv.end());
            if(vv.size()) v[i]=vv;
            else v[i]={"0"};
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends