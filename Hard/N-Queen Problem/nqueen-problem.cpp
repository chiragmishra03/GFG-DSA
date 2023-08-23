//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool isPossible(int i,int j,vector<vector<int>>&board,int n){
    for(int row=i-1;row>=0;row--) if(board[row][j]==1)return false;
    for(int row=i-1,col=j-1;row>=0 && col>=0;row--,col--)if(board[row][col]==1)return false;
    for(int row=i-1,col=j+1;row>=0&&col<n;row--,col++)if(board[row][col]==1)return false;
    return true;
}
void solve(int ind,vector<vector<int>>&board,int &n,vector<int>subans,vector<vector<int>>&ans)
{  
   if(ind==n){
       ans.push_back(subans);
       return;
   }
    for(int j=0;j<n;j++){
        if(isPossible(ind,j,board,n)){
            subans.push_back(j+1);
            board[ind][j]=1;
            solve(ind+1,board,n,subans,ans);
            subans.pop_back();
            board[ind][j]=0;
        }
    }
    return;
}
    vector<vector<int>> nQueen(int n) {
         vector<int>subans;
    vector<vector<int>>ans;
    vector<vector<int>>board(n,vector<int>(n,0));
    solve(0,board,n,subans,ans);
   return ans;
   
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends