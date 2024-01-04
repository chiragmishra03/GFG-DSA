//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        int result = 0;
        for(int k=0;k<=63;k++){
            int temp = (1<<k);
            int zero = 0;
            int one=0;
            for(int i=0;i<N;i++){
                int num = arr[i];
                if(temp&num)one++;
                else{zero++;}
            }
            
            if(one%3==1){
                result=(result|(1<<k));
            }
        }
        
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends