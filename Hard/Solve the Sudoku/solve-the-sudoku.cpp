//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku. 
 bool isSafe(int i, int j, int x, int grid[N][N]){
        for(int k = 0; k < N; k++){
            if(grid[i][k] == x || grid[k][j] == x){
                return false;
            }
        }
        int s = sqrt(N);
        int rs = i - i % s;
        int cs = j - j % s;
        for(int i = 0; i < s; i++){
            for(int j = 0; j < s; j++){
                if(grid[i+rs][j+cs] == x){
                    return false;
                }
            }
        }
        return true;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        int i = 0, j = 0;
        bool flag = true;
        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++){
                if(grid[i][j] == 0){
                    flag = false;
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
        if(i == N && j == N) return true;
        for(int x = 1; x <= N; x++){
            if(isSafe(i,j,x,grid)){
                grid[i][j] = x;
                if(SolveSudoku(grid)){
                    return true;
                }
                grid[i][j] = 0;
            }
        }
        return false;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout<<grid[i][j]<<" ";
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends