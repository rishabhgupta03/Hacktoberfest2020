public class StackUsingArray {

    int size = 5;
    int top = -1;
    int[] a = new int[size];

    boolean isEmpty(){
        return (top<0);
    }

    void push(int x){
        if(top>=(size-1)){
            System.out.println("Stack Overflow");
        }
        else{
            top += 1;
            a[top] = x;
            System.out.println(x + " pushed into stack");
        }
    }

    int pop(){
        if(top<0){
            System.out.println("Stack Underflow");
            return 0;
        }
        else{
            int res = a[top];
            top--;
            return res;
        }
    }

    int peek(){
        if(top<0){
            System.out.println("Stack Underflow");
            return 0;
        }
        else{
            return a[top];
        }
    }

    public static void main(String[] args) {
        StackUsingArray s = new StackUsingArray();
        s.push(20);
        s.push(40);
        System.out.println(s.pop() + " popped out from stack");
        s.push(30);
        System.out.println("The top element is " + s.peek());
        System.out.println("Is stack empty? " + s.isEmpty());
        System.out.println(s.pop() + " popped out from stack");
        System.out.println(s.pop() + " popped out from stack");
        System.out.println("Is stack empty? " + s.isEmpty());
    }

}