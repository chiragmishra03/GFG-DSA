//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	long long mod  = 1e9 + 7;
	long long dp[100001][2];
	long long solve(int n, char last) {
	if (n == 0) {
		return 1;
	}
	if(dp[n][last]) return dp[n][last];
	int a = 0;
	if (last == 0) {
		a = solve(n - 1, 0) + solve(n - 1, 1);
	}
	int b = 0;
	if (last == 1) {
		b = solve(n - 1, 0);
	}
	return dp[n][last] = ((a % mod) + (b % mod)) % mod;

}
	int TotalWays(int n)
	{
	    memset(dp, 0, sizeof dp);
	    long long a = solve(n, 0);
	    return ((a%mod)*(a%mod)%mod);
	}
	
	
	
	
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends