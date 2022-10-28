//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
	public:
		int NthTerm(int n){
		    long long int i,j=1;
		    if(n==1) return 2;
		    for(i=1;i<=n;i++)
		    {
		        
		        j=(i*j)+1;
		        j%=1000000007;
		    }
		    return j%1000000007;
		}
        // 3 11 49 
        //
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends