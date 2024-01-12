//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    queue<char>q;
		    vector<int>freq(150,0);
		    string ans;
		    for(int i=0;i<A.size();i++){
		        q.push(A[i]);
		        freq[A[i]]++;
		        while(!q.empty() and freq[q.front()]>1){
		            q.pop();
		        }
		        
		        if(q.empty()){
		           ans.push_back('#');
		        }
		        else{
		            ans.push_back(q.front());
		        }
		    }
		    
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends