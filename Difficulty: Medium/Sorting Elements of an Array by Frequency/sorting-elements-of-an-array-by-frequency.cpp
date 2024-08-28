//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    
    
static bool mycomp(pair<int, int>&a , pair<int, int>&b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second > b.second;
}
    vector<int> sortByFreq(vector<int>& arr) {
    vector<pair<int, int>>freq;
	unordered_map<int, int>mp;
	for (int i = 0; i < arr.size(); i++) {
		mp[arr[i]]++;
	}
	for (int i = 0; i < arr.size(); i++) {
		int element = arr[i];
		if (mp.find(element) != mp.end()) {
			auto it = mp.find(element);
			int frequency = it->second;
			int number = it->first;
			mp.erase(it);
			pair<int, int>p = make_pair(number, frequency);
			freq.push_back(p);
		}
	}
	sort(freq.begin(), freq.end(), mycomp);
	vector<int>ans;
	for (auto i : freq) {
		pair<int, int>p = i;
		while (p.second != 0) {
			ans.push_back(p.first);
			p.second--;
		}

	}
	return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends