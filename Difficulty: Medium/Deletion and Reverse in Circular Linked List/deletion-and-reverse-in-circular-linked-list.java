//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}

class LinkedList {
    // Function to print nodes in a given circular linked list
    static void printList(Node head) {
        if (head == null) {
            System.out.println("empty");
            return;
        }
        Node temp = head;
        do {
            System.out.print(temp.data + " ");
            temp = temp.next;
        } while (temp != head);
        System.out.println();
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            List<Integer> arr = new ArrayList<>();
            String input = br.readLine();
            StringTokenizer st = new StringTokenizer(input);
            while (st.hasMoreTokens()) {
                arr.add(Integer.parseInt(st.nextToken()));
            }
            int key = Integer.parseInt(br.readLine());
            Node head = new Node(arr.get(0));
            Node tail = head;
            for (int i = 1; i < arr.size(); ++i) {
                tail.next = new Node(arr.get(i));
                tail = tail.next;
            }
            tail.next = head; // Make the list circular
            Solution ob = new Solution();
            Node current = ob.deleteNode(head, key);
            Node rev = ob.reverse(current);
            printList(rev);
        }
    }
}

// } Driver Code Ends


/*class Node
{
    int data;
    Node next;
    Node(int d)
    {
        data=d;next=null;
    }
}*/

class Solution {
    Node reverse(Node head) {
       Node curr = head;
       Node tail = head;
       Node prev = null;
       Node iterator = head;
       while(iterator.next!=head){
           iterator = iterator.next;
       }
       iterator.next = null;
       while(curr!=null){
           Node forward = curr.next;
           curr.next = prev;
           prev = curr;
           curr = forward;
       }
       tail.next = prev;
       return prev;
    }

    Node deleteNode(Node head, int key) {
        if (head == null) {
            return null; // Empty list case
        }

        Node curr = head;
        Node prev = null;
        if (head.data == key) {
 
            Node tail = head;
            while (tail.next != head) {
                tail = tail.next;
            }

            // If there's only one node
            if (head.next == head) {
                return null; // List becomes empty after deleting the head
            }

            tail.next = head.next; // Point the last node to the new head
            head = head.next;      // Move the head
            return head;
        }

        // Traverse the list to find the node with the key
        do {
            prev = curr;
            curr = curr.next;
        } while (curr != head && curr.data != key);
        if (curr.data == key) {
            prev.next = curr.next;
        }

        return head;
    }
}