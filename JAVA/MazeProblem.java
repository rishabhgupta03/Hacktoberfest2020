/*this is a very popular problem. Rat in a Maze Problem when movement in all possible directions is allowed
we have given source and destination in a maze and we have to find all possible path to reach destination from source.
h=horizontal move
v=vertical move
*/

public class MazeProblem {
public static void main(String[] args) {
   mazePath(0,0,2,3,"");    //input
}
public static void mazePath(int sr,int sc,int er,int ec,String ans){
    if(sr==er&&sc==ec){
        System.out.println(ans);
        return;
    }
    if(sr>er || sc>ec){
        return;
    }
    mazePath(sr, sc+1, er, ec, ans+"h");    
    mazePath(sr+1, sc, er, ec, ans+"v");
}  
}
