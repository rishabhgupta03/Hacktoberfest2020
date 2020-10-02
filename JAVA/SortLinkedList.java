/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
class LinkedList
{
    Node head;
    
    public LinkedList()
    {
     this.head=null;   
    }
    
    void insertAtEnd(int data)
    {
        Node newNode=new Node(data);
        if(head==null)
        {
            head=newNode;
        }
        else
        {
            Node current=head;
            while(current.next!=null)
            {
               current=current.next; 
            }
            current.next=newNode;
        }
    }
    void insertAtStart(int data)
    {
        Node newNode=new Node(data);
        if(head==null)
        {
            head=newNode;
        }
        else
        {
            newNode.next=head;
            head=newNode;
        }
    }
    
    void traverse()
    {
       Node n=head;
       while(n!=null)
       {
           System.out.print(n.data+" -> ");
           n=n.next;
       }
    }
    
    void sortList()
    {
        int swap=0;
        Node n=head;
        Node s1=head;
        Node s2=head;
        while(s1!=null)
        {
            s2=head;
            Node tmp=head;
            Node tmp2=null;
            while(s2.next!=null)
            {
                if(s2.data>s2.next.data)
                {
                    swap++;
                    if(s2==head)
                    {
                       head=s2.next;
                    }
                 tmp2=s2.next.next;
                 s2.next.next=s2;
                 tmp.next=s2.next;
                 s2.next=tmp2;
                
                }
                tmp=s2;
                s2=s2.next;
                if(s2==null)
                 {
                     break;
                 }
            }
            s1=s1.next;
        }
        System.out.println("Swap " + swap);
    }
}
class Node
{
  int data;
  Node next;
  
  public Node(int data)
  {
      this.data=data;
      this.next=null;
  }
  
}
public class Main
{
	public static void main(String[] args) {
	    LinkedList l1=new LinkedList();
	    l1.insertAtEnd(5);
	    l1.insertAtEnd(2);
	    l1.insertAtEnd(3);
	    l1.insertAtEnd(1);
	    l1.insertAtEnd(12);
	    l1.insertAtEnd(-1);
	    l1.insertAtEnd(14);
	    l1.insertAtEnd(15);
	    l1.insertAtEnd(16);
	    l1.insertAtEnd(-5);
	    l1.insertAtEnd(6);
	    l1.insertAtEnd(7);
	    l1.insertAtEnd(8);
	    l1.insertAtEnd(9);
	    l1.insertAtEnd(10);
	    l1.insertAtEnd(-11);
	    l1.insertAtEnd(17);
	    l1.insertAtEnd(-18);
	    l1.insertAtEnd(0);
	    l1.insertAtEnd(-222);
	    l1.traverse();
	    System.out.println();
	    l1.sortList();
	    l1.traverse();
	    System.out.println();

	}
}

