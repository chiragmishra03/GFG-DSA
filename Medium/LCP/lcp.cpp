//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string LCP(string ar[], int n)
    {
        sort(ar,ar+n);
        
        string ans="";
        
        string a = ar[0];
        string b = ar[n-1];
        
        for(int i=0;i<min(a.size(),b.size());i++){
            if(a[i]==b[i]){
                ans+=a[i];
            }
            else{
                break;
            }
        }
        
        if(ans.size()==0)return "-1";
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{

	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}
// } Driver Code Ends