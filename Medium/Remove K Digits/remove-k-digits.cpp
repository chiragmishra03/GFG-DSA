//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for (char digit : num) {
            while (!st.empty() && k > 0 && st.top() > digit) {
                st.pop();
                k--;
            }
            st.push(digit);
        }
        while(!st.empty() and k>0){
            st.pop();
            k--;
        }
        if (st.empty()) {
            return "0"; 
        }
        num="";
        while (!st.empty()) {
            num.push_back(st.top());
            st.pop();
        }
        while(num.size()>1 and num.back()=='0'){
            num.pop_back();
        }
        reverse(num.begin(),num.end());
        return num;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends