//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	ll mod=1e9+7;
	vector<int>dp(n+1 , -1);
    dp[1] = 2;
    dp[2] = 3;
    for(int i=3; i<=n; i++){
        dp[i] = (dp[i-2] + dp[i-1])%mod;
    }
    
    return dp[n];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends