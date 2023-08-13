//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int fib(int n,long long dp[])
    {
      if(n<=1)
      {
          return n;
      }
      if(dp[n]!=-1)
      {
          return dp[n];
      }
      dp[n]=(fib(n-1,dp)+fib(n-2,dp))%1000000007;
      return dp[n];
    }
    int nthFibonacci(int n){
         long long int dp[100001];

        for(int i=0; i<=n; i++)
        {
            dp[i]=-1;
        }
      
       return fib(n,dp);
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
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends