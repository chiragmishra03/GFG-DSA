//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        int ans=0;
        int zero=0;
        int one=0;
        int len=0;
        for(int i=0;i<str.length();i++){
             if(str[i]=='0')zero++;
            else{
                one++;
            }
            if(zero!=0 and one!=0 and zero==one){
                ans++;
                len=zero+one;
                zero=0;
                one=0;
            }
            
        }
        if (zero != 0 || one != 0) return -1;
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
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends