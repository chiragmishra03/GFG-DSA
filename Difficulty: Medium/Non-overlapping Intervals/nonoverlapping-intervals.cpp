//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minRemoval(int N, vector<vector<int>> &intervals) {
    vector<pair<int, int>> arr;
    for(int i = 0; i < N; i++){
        arr.push_back(make_pair(intervals[i][0], intervals[i][1]));
    }
    sort(arr.begin(), arr.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return a.second < b.second;
    });
    int count = 0;
    int end = arr[0].second;
    for(int i = 1; i < N; i++){
        if(arr[i].first >= end){
            end = arr[i].second;
        } else {
            count++;
        }
    }
    return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(N, intervals) << endl;
    }
    return 0;
}
// } Driver Code Ends