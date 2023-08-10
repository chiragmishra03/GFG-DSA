//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    vector<int> mp1(26, 0), mp2(26, 0);
	    int ans = 0;
	    int i = 0, j = 0;
	    while(i < pat.size()) {
	        mp1[pat[i] - 'a']++;
	        mp2[txt[i] - 'a']++;
	        i++;
	    }
	    while(i < txt.size()) {
	        if(mp1 == mp2) {
	            ans++;
	        }
	        mp2[txt[i] - 'a']++;
	        i++;
	        mp2[txt[j] - 'a']--;
	        j++;
	    }
	    if(mp1 == mp2) ans++;
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends