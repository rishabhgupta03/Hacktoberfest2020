
/*The RPS world championship is here. Here two players A and B play the game. You need to determine who wins.
Both players can choose moves from the set {R,P,S}.
The game is a draw if both players choose the same item.
The winning rules of RPS are given below:

Rock crushes scissor
Scissor cuts paper
Paper envelops rock
Input:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains single line of input that contains two characters sidebyside. These characters denote the moves of players A and B respectively.

Output:
For each testcase, in a newline, print the winner. If match is draw, print 'DRAW'.

Constraints:
1<= T <= 50

Example:
Input:
7
RR
RS
SR
SP
PP
PS
RP
Output:
DRAW
A
B
A
DRAW
B
B*/
import java.util.*;

class GFG {
	public static void main (String[] args) {
	Scanner sc=new Scanner(System.in);
	int t=sc.nextInt();
	sc.nextLine();
	while(t!=0)
	{
	    String str=sc.nextLine();
	    if(str.charAt(0)==str.charAt(1))
	    {
	        System.out.println("DRAW");
	    }
	    else if(str.equals("RS")||str.equals("PR")||str.equals("SP"))
	    {
	      System.out.println("A");
	             
	    }
	   else
	   System.out.println("B");
	    t--;
	}
	sc.close();
	}
}
