import java.util.*;
class Node
{
  int data;
  Node next;
  Node prev;
}
class DoublyLinkedList
{
  Node head;
  public void insert (int data)
  {
    Node node = new Node ();
    node.data = data;
    if (head == null)
      {
     	head = node;
          
      }
    else
      {
	Node n = head;
	while (n.next != null)
	  {
	    n = n.next;
	  }
	n.next = node;
	node = n.next;

      }
  }
  public void show ()
  {
    Node n1 = head;
    while (n1.next != null)
      {
	System.out.println (n1.data);
	n1= n1.next;

      }
    System.out.println (n1.data);

  }
}

public class Main
{
  public static void main (String[]args)
  {
    DoublyLinkedList l = new DoublyLinkedList ();
      l.insert (2);
      l.insert (3);
      l.insert (4);
      l.show();

  }
}
