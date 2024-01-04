//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> leftSmaller(int n, int arr[]){
        stack<int>st;
        st.push(-1);
        vector<int>v;
        for(int i=0;i<n;i++){
            if(st.top()<arr[i]){
                v.push_back(st.top());
                st.push(arr[i]);
            }
            else{
                while(st.top()>=arr[i]){
                    st.pop();
                }
                v.push_back(st.top());
                st.push(arr[i]);
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends