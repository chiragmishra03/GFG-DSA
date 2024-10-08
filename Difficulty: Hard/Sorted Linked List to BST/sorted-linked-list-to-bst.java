//{ Driver Code Starts
import java.io.*;
import java.util.*;

class LNode {
    int data;
    LNode next;

    LNode(int d) {
        data = d;
        next = null;
    }
}

class TNode {
    int data;
    TNode left, right;

    TNode(int x) {
        data = x;
        left = right = null;
    }
}

class ListToBST {

    /* Function to print linked list */
    public static void preOrder(TNode root) {

        if (root == null) return;

        System.out.print(root.data + " ");
        preOrder(root.left);
        preOrder(root.right);
    }

    /* Driver program to test above functions */
    public static void main(String args[]) throws IOException {

        /* Constructed Linked List is 1->2->3->4->5->6->
           7->8->8->9->null */
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());

        while (t > 0) {

            String str[] = read.readLine().trim().split(" ");
            int n = str.length;
            LNode head = new LNode(Integer.parseInt(str[0]));
            LNode tail = head;
            for (int i = 1; i < n; i++) {
                tail.next = new LNode(Integer.parseInt(str[i]));
                tail = tail.next;
            }

            Solution obj = new Solution();
            TNode root = obj.sortedListToBST(head);
            preOrder(root);

            System.out.println();

            t--;
        }
    }
}

// } Driver Code Ends


// User function Template for Java

/*Linked List Node
class LNode
{
    int data;
    LNode next;
    LNode(int d) {
        data = d;
        next = null;
    }
}

//Tree Node
class TNode
{
    int data;
    TNode left, right;
    TNode(int x)
    {
        data=x;
        left=right=null;
    }

}*/

class Solution {
    // Helper method to find the middle of the linked list
    private LNode findMiddle(LNode head) {
        LNode fast = head;
        LNode slow = head;
        LNode prev = null;

        while (fast != null && fast.next != null) {
            prev = slow;
            slow = slow.next;
            fast = fast.next.next;
        }

        // Disconnect the left half from the middle node
        if (prev != null) {
            prev.next = null;
        }

        return slow; // The middle node
    }

    // Recursive method to convert sorted linked list to BST
    public TNode sortedListToBST(LNode head) {
        // Base case: if the list is empty
        if (head == null) {
            return null;
        }
        
        // Base case: if the list has only one element
        if (head.next == null) {
            return new TNode(head.data);
        }

        // Find the middle node
        LNode middle = findMiddle(head);

        // Create a new tree node with the middle element as root
        TNode root = new TNode(middle.data);

        // Recursively construct the left and right subtrees
        root.left = sortedListToBST(head);         // Left half
        root.right = sortedListToBST(middle.next); // Right half after middle

        return root;
    }
}