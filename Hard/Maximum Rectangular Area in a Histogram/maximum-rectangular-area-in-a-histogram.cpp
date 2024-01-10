//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
 
vector<int> smaller(long long heights[], int n, int start) {
    vector<int> ans;
    if (start == 0) {
        stack<int> st;
        st.push(0);
        ans.push_back(-1);
        for (int i = 1; i < n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                ans.push_back(-1);
            } else {
                ans.push_back(st.top());
            }
            st.push(i);
        }
    } else {
        stack<int> st;
        st.push(start - 1);
        ans.push_back(-1);
        for (int i = start - 2; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                ans.push_back(-1);
            } else {
                ans.push_back(st.top());
            }
            st.push(i);
        }
        reverse(ans.begin(), ans.end());
    }
    return ans;
}

long long getMaxArea(long long arr[], int n) {
    if (n == 1) return arr[0];
    vector<int> leftsmaller = smaller(arr, n, 0);
    vector<int> rightsmaller = smaller(arr, n, n);
    long long area = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        long long len = arr[i];
        int first = leftsmaller[i];
        int last = rightsmaller[i];
        if (last == -1) last = n;
        long long breadth = last - first - 1;
        long long currentarea = len * breadth;
        area = max(currentarea, area);
    }
    return area;
}

};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends