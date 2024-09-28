//{ Driver Code Starts
import java.util.Scanner;

class SquartRoot {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            long a = sc.nextInt();
            Solution obj = new Solution();
            System.out.println(obj.floorSqrt(a));
            t--;
        }
    }
}
// } Driver Code Ends


/*You are required to complete
this function*/

// Function to find square root
// x: element to find square root
class Solution {
     long floorSqrt(long n) {
         if(n==1)return n;
        long ans=-1;
        long hi = n/2;
        long lo = 1;
        while(hi>=lo)
        {
            long mid = ((hi+lo)/2);
            long sqr = mid*mid;
            if(sqr==n){
                ans =(long) mid;
                return ans;
            }else if(sqr>n)hi=(long)(mid-1);
            else{
                ans=(long)mid;
                lo = (long)mid+1;
            }
        }
        return ans;
    }
}
