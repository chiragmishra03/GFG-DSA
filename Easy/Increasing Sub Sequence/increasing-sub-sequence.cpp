//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxLength(string S)
    {
        int n = S.size() ;
        vector<char>t;
        for(int i=0 ; i<n ; i++){
            auto j = lower_bound(t.begin(),t.end(),S[i]) ;
            if(j == t.end()) t.push_back(S[i]);
            else *j = S[i];
        }
        return t.size() ;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout << ob.maxLength(S) << endl;
    }
    return 0; 
}
// } Driver Code Ends