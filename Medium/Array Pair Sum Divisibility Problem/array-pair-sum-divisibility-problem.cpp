//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n = nums.size();
        if(n%2==1)return false;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            int r1 = nums[i]%k;
            int r2 = k-r1;
            if(st.find(r2)!=st.end()){
                st.erase(r2);
            }
            else if(r1==0 and st.find(0)!=st.end()){
                st.erase(0);
            }
            else{
                st.insert(r1);
            }
        }
        
        if(st.size()==0)return true;
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends