//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMin(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int ans = INT_MAX;
        while(s<=e){
            int mid = (s+e)/2;
            if(arr[mid]>=arr[s]){
                //left part is sorted
                ans = min(ans,arr[s]);
                s = mid+1;
            }
            else{
                //right part is sorted
                ans = min(ans,arr[mid]);
                e=mid-1;
            }
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends