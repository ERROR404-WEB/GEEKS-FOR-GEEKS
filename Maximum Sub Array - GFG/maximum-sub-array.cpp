//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    vector<pair<int,vector<int>>>v;
	    vector<int>temp;
	    int maxx=0,sum=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<0)
	        {
	            if(temp.size()) v.push_back({sum,temp});
	            sum=0;
	            temp.clear();
	        }
	        else{
	            
	            sum+=a[i];
	            temp.push_back(a[i]);
	        }
	        maxx=max(sum,maxx);
	    }
	    if(temp.size()) v.push_back({sum,temp});
	    for(auto i:v)
	    {
	        if(i.first==maxx ) return i.second;

	    }
	    return {-1};
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends