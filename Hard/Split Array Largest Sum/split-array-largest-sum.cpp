//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool check(int arr[], int n, int mid, int k){
        int count = 0, sum = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > mid){
                return false;
            }
            sum += arr[i];
            if(sum > mid){
                count++;
                sum = arr[i];
            }
        }
        count++;

        if(count <= k){
            return true;
        }
        return false;
    }
    int splitArray(int arr[] ,int N, int K) {
        int start = *max_element(arr, arr+N);
        int end = 0;
        for(int i = 0; i < N; i++){
            end += arr[i];
        }

        int ans = 0;
        while(start <= end){
            int mid = (start+end)/2;
            if(check(arr, N, mid, K)){
                ans = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends