//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    int n=nums.size();
	    vector<int> right(n); //longest decreasing order;
	    vector<int> left(n); //longest increasing order;
	    
	    for(int i=0;i<n;i++){
	        right[i]=1;
	        for(int j=0;j<i;j++){
	            if(nums[j]<nums[i] && right[j]+1>right[i]) right[i]=right[j]+1;
	        }
	    }
	    
	    for(int i=n-1;i>=0;i--){
	        left[i]=1;
	        for(int j=i+1;j<n;j++){
	            if(nums[j]<nums[i] && left[j]+1>left[i]) left[i]=left[j]+1;
	        }
	    }
	    int ans=0;
	    for(int i=0;i<n;i++){
	        ans=max(ans,right[i]+left[i]-1);
	    }
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
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends