//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.lang.*;
import java.util.*;


// } Driver Code Ends
// User function Template for Java

class Solution {
    public int f(int i , int k , int arr[],List<Integer>dp){
        if(i==arr.length-1)return 0;
        if (dp.get(i) != Integer.MAX_VALUE) return dp.get(i);
        int minimumCost = Integer.MAX_VALUE;
        for(int idx = 1; idx<=k;idx++){
            int fcost = Integer.MAX_VALUE;
            if(i+idx<=arr.length-1){
                 fcost = Math.abs(arr[i]-arr[i+idx])+f(i+idx,k,arr,dp);
            }
            minimumCost = Math.min(fcost,minimumCost);
        }
        dp.set(i, minimumCost);
        return minimumCost;
    }
    public int minimizeCost(int k, int arr[]) {
        List<Integer>dp = new ArrayList<>();
        for(int i=0;i<arr.length;i++){
            dp.add(Integer.MAX_VALUE);
        }
        return f(0,k,arr,dp);
    }
}


//{ Driver Code Starts.

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            int k = Integer.parseInt(br.readLine());
            String line = br.readLine();
            String[] tokens = line.split(" ");

            // Create an ArrayList to store the integers
            ArrayList<Integer> array = new ArrayList<>();

            // Parse the tokens into integers and add to the array
            for (String token : tokens) {
                array.add(Integer.parseInt(token));
            }

            int[] arr = new int[array.size()];
            int idx = 0;
            for (int i : array) arr[idx++] = i;
            Solution obj = new Solution();
            int res = obj.minimizeCost(k, arr);

            System.out.println(res);
        }
    }
}
// } Driver Code Ends