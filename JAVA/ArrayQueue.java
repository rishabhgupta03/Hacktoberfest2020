import java.util.Arrays;

public class ArrayQueue {
    private int[] items;
    private int rear;
    private int count;
    private int front;

    ArrayQueue(int capacity){
        items = new int[capacity];
    }

    public void enque(int item){
        if (count == items.length)
            throw new IllegalStateException();

        items[rear] = item;
        rear = (rear + 1) % 5;
        count++;
    }

    public int deque(){
        var item = items[front];
        items[front] = 0;
        front = (front + 1) % 5;
        count--;
        return item;
    }
    @Override
    public String toString(){
       return Arrays.toString(items);
    }
}
