public class StackUsingLinkedList {

    static class Node{
        int data;
        Node next;
        Node(int x){
            data = x;
            next = null;
        }
    }

    Node head = null;

    public void push(int x){
        Node newNode = new Node(x);
        if(head==null)
            head = newNode;
        else{
            Node temp = head;
            head = newNode;
            head.next = temp;
        }
        System.out.println(x + " pushed into stack");
    }

    public int pop(){
        if(head==null){
            System.out.println("Stack is Empty");
            return -1;
        }
        else
        {
            int popped = head.data;
            head = head.next;
            return popped;
        }
    }

    public int peek()
    {
        if (head == null) {
            System.out.println("Stack is empty");
            return -1;
        }
        else {
            return head.data;
        }
    }

    public boolean isEmpty(){
        if(head==null)
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        StackUsingLinkedList s = new StackUsingLinkedList();
        s.push(20);
        s.push(40);
        s.push(30);
        System.out.println(s.pop() + " popped out of stack");
        System.out.println("Top Element = " + s.peek());
        System.out.println("Is stack empty? " + s.isEmpty());
        System.out.println(s.pop() + " popped out of stack");
        System.out.println(s.pop() + " popped out of stack");
        System.out.println("Is stack empty? " + s.isEmpty());
    }

}