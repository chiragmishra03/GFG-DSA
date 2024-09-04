//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        
        stack<char>st;
        int i=0;
        while(i<s.size()){
            int flag = 0;
            if(s[i]!=')'){
                st.push(s[i]);
            }
            else{
                while(!st.empty() and st.top()!='('){
                    if(st.top() == '+' || st.top()== '-' || st.top()== '*' 
                    || st.top() =='/'){
                        flag=1;
                    }
                    st.pop();
                }
                st.pop();
                if(flag==0)return 1;
            }
            i++;
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        string s;
        cin >> s;

        Solution obj;
        int res = obj.checkRedundancy(s);

        cout << res << endl;
    }
}

// } Driver Code Ends