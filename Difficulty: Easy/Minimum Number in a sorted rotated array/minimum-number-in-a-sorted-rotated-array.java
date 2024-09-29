//{ Driver Code Starts
import java.io.*;
import java.lang.*;
import java.util.*;

class Array
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- > 0)
        {
            int n = Integer.parseInt(read.readLine());
            String st[] = read.readLine().trim().split("\\s+");
            
            int arr[] = new int[n];
            
            for(int i = 0; i < n; i++)
              arr[i] = Integer.parseInt(st[i]);
              
            System.out.println(new Solution().minNumber(arr,0,n-1));
        }
    }
    
}
// } Driver Code Ends


class Solution
{
    //Function to find the minimum element in sorted and rotated array.
    static int minNumber(int arr[], int low, int high)
    {
        int s = 0;
        int e = arr.length-1;
        int ans = Integer.MAX_VALUE;
        while(s<=e){
            int mid = (s+e)/2;
            if(arr[mid]>=arr[s]){
                //left part is sorted
                ans = Math.min(ans,arr[s]);
                s = mid+1;
            }
            else{
                //right part is sorted
                ans = Math.min(ans,arr[mid]);
                e=mid-1;
            }
        }

        return ans;
    }
}