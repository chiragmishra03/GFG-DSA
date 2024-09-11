//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
     stack<char>st;
    string rem;
    int len = 0;
    for(int i = 0; i<s.length(); i++){
        if(st.empty()) st.push(s[i]);
        else{
            char top = st.top();
            if(top == '{' && s[i] == '}'){
                st.pop();
                len+=2;
            }
            else{
                st.push(s[i]);
            }
        }
    }
    if(len == s.length() && st.empty()) return 0;
    else if(st.size()%2 == 0){
        int rev = 0;
        while(!st.empty()){
            char b = st.top();
            st.pop();
            char a = st.top();
            st.pop();
            
            if(a == '}' && b == '{') rev+=2;
            else if(a == '{' && b == '{') rev+=1;
            else if(a == '}' && b == '}') rev+=1;
        }
        return rev;
    }
    
    return -1;
}