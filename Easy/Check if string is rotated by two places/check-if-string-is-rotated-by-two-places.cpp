//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if(str1.size()!=str2.size())return 0;
        if(str1.size()==1 and str2.size()==1){
            if(str1==str2)return 1;
            else{
                return 0;
            }
        }
        int t=2;
        while(t--)
        {
        char b = str1[str1.size()-1];
        char c = str1[0];
        char p ;
        for(int i=1;i<str1.size();i++){
           p = str1[i];
           str1[i] = c; 
           c = p;
        }
        str1[0] = b;
        }
        if(str1==str2)return 1;
        t=2;
        while(t--)
        {
           char b = str1[0];
           char c = str1[1];
           char p ;
           for(int i=2;i<str1.size();i++){
               p = str1[i];
               str1[i-2] = p;
           }
           str1[str1.size()-2] = b;
           str1[str1.size()-1] = c;
        }
        if(str1==str2)return 1;
        return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends