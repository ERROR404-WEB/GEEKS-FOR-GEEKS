//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    
        double maximumValue (vector<pair<int, int>>& items, int n, int w)
        {
            vector<pair<double,pair<int,int>>> a;
            for(auto i:items)
            {
                a.push_back({(double)i.second/double(i.first),{i.second,i.first}});
            }
            sort(a.begin(),a.end());
            double c=0,f=0;
            for(int i=a.size()-1;i>=0;i--) 
            {
                if(c+a[i].second.second>w) 
                {
                    f+=a[i].first*(w-c);
                        break;
                }
                c+=a[i].second.second;
                f+=a[i].second.first;
            }
            return f;
        }
    double fractionalKnapsack(int w, Item aa[], int n)
    {
        vector<pair<int, int>>a(n);
        for(int i=0;i<n;i++)
        {
            a[i].first=aa[i].weight;
            a[i].second= aa[i].value;
        }
        return maximumValue(a,n,w);
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends