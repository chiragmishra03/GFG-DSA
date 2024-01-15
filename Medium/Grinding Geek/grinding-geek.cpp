//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int dp[1001][1001] ; 
    int dfs(int ind, int cost, vector<int>&arr) {
        if(ind==arr.size()) return 0;
        if(dp[ind][cost]!=-1) return dp[ind][cost]; 
        int ans=dfs(ind+1,cost, arr) ; 
        if(cost>=arr[ind]) {
            int newcost=cost-arr[ind] ; 
            newcost+=(arr[ind]*9)/10; 
            ans=max(ans, 1+dfs(ind+1,newcost,arr)) ; 
        }
        return dp[ind][cost]= ans; 
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        memset(dp,-1,sizeof(dp)) ; 
        return dfs(0,total,cost) ; 
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends