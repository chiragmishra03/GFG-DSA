//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>v;
        stack<long long>st;
        st.push(-1);
        st.push(arr[n-1]);
        v.push_back(-1);
        for(int i=n-2;i>=0;i--){
            if(arr[i]<st.top()){
                v.push_back(st.top());
                st.push(arr[i]);
            }
            else{
                while(!st.empty() and st.top()<=arr[i])
                {
                    st.pop();
                }
                if(st.empty()){
                    st.push(-1);
                }
                v.push_back(st.top());
                st.push(arr[i]);
            }
        }
        
        reverse(v.begin() , v.end());
        return v;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends