//{ Driver Code Starts
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            String input = br.readLine();
            String[] inputs = input.split(" ");
            int[] arr = new int[inputs.length];

            for (int i = 0; i < inputs.length; i++) {
                arr[i] = Integer.parseInt(inputs[i]);
            }

            int[] ans = new Solve().findTwoElement(arr);
            System.out.println(ans[0] + " " + ans[1]);
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solve {
    public static int[] findTwoElement(int arr[]) {
        int []ans= new int[2];
        
        for(int i=0;i<arr.length;i++){
            while(arr[i] != i + 1 && arr[i] != arr[arr[i] - 1]) {
            int temp = arr[i];
            arr[i] = arr[temp - 1];
            arr[temp - 1] = temp;
        }
    }
        for(int i=0;i<arr.length;i++){
            int missing=0;
            int repeating=0;
            if(i+1!=arr[i]){
                ans[1]=missing=i+1;
                ans[0]=repeating=arr[i];
                break;
            }
        }
        return ans;
    }
}
