//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void solve(int index, int n, string s, vector<string>&ans, string &temp)
	    {
	        if(index == n){
	            ans.push_back(temp);
	            return;
	        }
	        temp.push_back(s[index]);
	        solve(index+1,n,s,ans,temp);
	        temp.pop_back();
	        solve(index+1,n,s,ans,temp);
	    }
		vector<string> AllPossibleStrings(string s){
		    vector<string>ans;
		    int n = s.length();
		    string temp = "";
		    solve(0,n,s,ans,temp);
		    sort(ans.begin(),ans.end());
		    ans.erase(ans.begin(),ans.begin()+1);
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends