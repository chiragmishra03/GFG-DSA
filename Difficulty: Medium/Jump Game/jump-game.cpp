//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int arr[], int n) {
       int ans =0;
       int maxIndex = 0;
       for(int i=0;i<n;i++){
           maxIndex = max(i + arr[i] , maxIndex);
           if(maxIndex >=n-1){
               ans++;
               return 1;
           }
           if(arr[i]==0 && maxIndex==i)return 0;
           ans++;
       }
       return ans>0?1:0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends