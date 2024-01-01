//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{	public:
		string SortedString(string s)
		{
		  string str1="",str2="";
          for(int i=0;i<s.size();i++)
          {
              if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
              {
                  str1+=s[i];
              }
              else
              {
                  str2+=s[i];
              }
          }
          
          sort(str1.begin(),str1.end());
          sort(str2.begin(),str2.end());
          
          int i=0,j=0,k=0;
          
          
          if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u')
          {
              s="";
              while(i<str1.size() and j<str2.size())
              {
                  if(k%2==0)
                  {
                      s+=str1[i];
                      i++;
                      k++;
                  }
                  else
                  {
                      s+=str2[j];
                      j++;
                      k++;
                  }
              }
              
              while(j<str2.size())
              {
                  
                      s+=str2[j];
                      j++;
              }
              
              while(i<str1.size())
              {
                  
                      s+=str1[i];
                      i++;
                  
              }
          }
          else
          {
              s="";
              while(i<str1.size() and j<str2.size())
              {
              if(k%2!=0)
                  {
                      s+=str1[i];
                      i++;
                      k++;
                  }
                  else
                  {
                      s+=str2[j];
                      j++;
                      k++;
                  }
                  
              }
                   while(j<str2.size())
              {
                  
                      s+=str2[j];
                      j++;
              }
              
              while(i<str1.size())
              {
                  
                      s+=str1[i];
                      i++;
                  
              }
          }
          return s;
          
		}

};


//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string s;
	    cin >> s;
	    Solution ob;
	    string ans=ob.SortedString(s);
	    cout<<ans<<"\n";
    }
	return 0;
}
// } Driver Code Ends