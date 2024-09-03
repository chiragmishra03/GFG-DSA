//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
           sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b){
                 return a[0] < b[0];
         });
         int n = intervals.size();
         vector<int> prev = intervals[0];
         vector<vector<int>> ans;
         for(int i=1; i<n; i++){
             vector<int> temp = intervals[i];
             if(prev[1] >= temp[0]){
                 prev[1] = max(prev[1], temp[1]);
             }else{
                 ans.push_back(prev);
                 prev = temp;
             }
         }
         ans.push_back(prev);
         return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends