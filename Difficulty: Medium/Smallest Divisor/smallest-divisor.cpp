//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int highest(vector<int>& arr, int n){
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            
            ans = max(arr[i],ans);
            
        }return ans;
    }
     int totalsum(vector<int>& nums,int mid){
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum + ceil((double)nums[i]/(double)mid);
        }return sum;
    }
    int smallestDivisor(vector<int>& nums, int K) {

         int n = nums.size();
        long long low = 1;
        long long  high = highest(nums,n);
        long long ans=0;
        while(low<=high){
            
            long long mid = (low+high)/2;
            long long  poss = totalsum(nums,mid);
            if(poss<=K){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
            
        }return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends