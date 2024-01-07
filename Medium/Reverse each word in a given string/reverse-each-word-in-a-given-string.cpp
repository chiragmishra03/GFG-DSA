//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        stack<char>st1;
        stack<string>st2;
        for(int i=0;i<s.length();i++){
            st1.push(s[i]);
        }
        string str="";
        while(!st1.empty()){
            
            if(st1.top()=='.')
            {st2.push(str);
                str="";
            }
            else
            str+=st1.top();
            
            st1.pop();
        }
        st2.push(str);
        string ans = "";
        while(st2.size()>1){
            ans+=st2.top()+'.';
            st2.pop();
        }
        ans+=st2.top();
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends