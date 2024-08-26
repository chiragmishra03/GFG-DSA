//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        vector<int>freq(N,0);
        int sum=0;
        for(int i=0;i<N;i++){
            int ele=1;
            if(arr[i]==0){
                ele = -1;
            }
            sum = sum + ele;
            freq[i]  = sum;
        }
        unordered_map<int,int>mp;
        int len=0;
        for(int i=0;i<freq.size();i++){
            auto it = mp.find(freq[i]);
            if(freq[i]==0){
                len = max(len , i+1);
            }
            else if(it!=mp.end()){
                len = max(len , i- mp[freq[i]]);
            }
            if(mp.find(freq[i])==mp.end())
            mp[freq[i]]=i;
        }
        return len;
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends