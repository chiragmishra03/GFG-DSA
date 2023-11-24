//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:

long long int mod = 1e9 + 7;
    vector<long long> nthRowOfPascalTriangle(int n) {
      vector<vector<long long> > ans;
      for(int i=0;i<=n;i++){
         vector<long long> row(i + 1, 1);
          for(int j=1;j<i;j++){
            row[j]=((ans[i-1][j])%mod+(ans[i-1][j-1])%mod)%mod;
          }
          
          ans.push_back(row);
      }
      return ans[n-1];
    }
};



//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends