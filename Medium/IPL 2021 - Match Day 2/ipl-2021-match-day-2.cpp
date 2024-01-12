//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        deque<int>dq;
        int i=0;
        int j=0;
        vector<int>ans;
        while(j<n){
            while(!dq.empty() and arr[dq.back()]<arr[j]){dq.pop_back();}
            dq.push_back(j);
            if(j-i+1==k)
            {
                ans.push_back(arr[dq.front()]);
                
                if(i==dq.front())
                {
                    dq.pop_front();
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends