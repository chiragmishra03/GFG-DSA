//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        map<int,int>mp;
        vector<int>freq(n,0);
        int sum=0;
        for(int i=0;i<n;i++){
            sum = sum+arr[i];
            freq[i] = sum;
        }
        for(int i=0;i<freq.size();i++){
            if(mp.find(freq[i])!=mp.end() || freq[i]==0)return true;
            mp[freq[i]]=1;
        }
        return false;
    }
    
    
    
    
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends