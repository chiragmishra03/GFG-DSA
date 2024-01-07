//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minDeletions(int arr[], int n) 
	{ 
	    set<int> st;
	    vector<int> nums;
	    for(int i=0; i<n; i++)  st.insert(arr[i]);
	    for(auto it: st) nums.push_back(it);
	    int m = nums.size();
	    int dp[n+1][m+1];
	    
	    for(int i=0; i<=n; i++) dp[i][0] = 0;
	    for(int j=0; j<=m; j++) dp[0][j] = 0;
	    
	    for(int i=1; i<=n; i++){
	        for(int j=1; j<=m; j++){
	            if(arr[i-1] == nums[j-1]) dp[i][j] = dp[i-1][j-1]+1;
	            else dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
	        }
	    }
	    
	    return n-dp[n][m];
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

	    

	    Solution ob;
	    cout << ob.minDeletions(arr, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends