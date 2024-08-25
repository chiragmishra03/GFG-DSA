//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int N, int K) 
    { 
         vector<int> freq(N, 0);
         int sum = 0;
         unordered_map<int, int> mp;
         int len = 0;
        for (int i = 0; i < N; i++) {
            sum += arr[i];
            freq[i] = sum;
            if (sum == K) {
                len = max(len, i + 1);
            }
            int rem = sum - K;
    
            if (mp.find(rem) != mp.end()) {
                len = max(len, i - mp[rem]);
            }
    
            if (mp.find(sum) == mp.end()) {
                mp[sum] = i;
            }
}
        return len;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends