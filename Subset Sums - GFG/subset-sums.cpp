//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int>v,temp;
     int sum=0;
     void combi(vector<int>&a,int i)
     {
         if(i>=a.size())
         {
            sum=0;
            for(auto i:temp) sum+=i;
            v.push_back(sum);
            return ;
         }
         temp.push_back(a[i]);
         combi(a,i+1);
         temp.pop_back();
         combi(a,i+1);
     }
    
    
    vector<int> subsetSums(vector<int> a, int n)
    {
       
        combi(a,0);
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends