//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int LCSof3 (string A, string B, string C, int n1, int n2, int n3);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        cout << LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int lcs(string s1, string s2, string s3) {
    int n = s1.size();
    int m = s2.size();
    int k = s3.size();
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(k + 1, 0)));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            for (int l = 1; l <= k; ++l) {
                if (s1[i - 1] == s2[j - 1] && s1[i - 1] == s3[l - 1]) {
                    dp[i][j][l] = 1 + dp[i - 1][j - 1][l - 1];
                } else {
                    dp[i][j][l] = max(dp[i - 1][j][l], max(dp[i][j - 1][l], dp[i][j][l - 1]));
                }
            }
        }
    }
    return dp[n][m][k];
}


int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
   return lcs(A,B,C);
   
}