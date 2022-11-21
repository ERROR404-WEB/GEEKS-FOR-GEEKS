//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<vector<int>>ans;
	vector<int>temp;
	void comb(vector<int>&a,int target,int i)
	{
	    if(target==0)
	    {
	        ans.push_back(temp);
	        return;
	    }
	    if(i>=a.size() or target<0) return;
	    
	    temp.push_back(a[i]);
	    comb(a,target-a[i],i);
	    temp.pop_back();
	    comb(a,target,i+1);
	}
    vector<vector<int>> UniquePartitions(int n) {
        vector<int>a(n,0);
        for(int i=0;i<n;i++) a[i]=n-i;
        comb(a,n,0);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends