//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution {
public:
    int dp[18][18];
    
    int help(int a, int b) {
        if (a == 0 || b == 0) return 1; // Base case: there is only one path
        if (dp[a][b] != -1) return dp[a][b];
        return dp[a][b] = help(a - 1, b) + help(a, b - 1);
    }
    
    int NumberOfPath(int a, int b) {
        memset(dp, -1, sizeof(dp));
        return help(a-1, b-1);
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends