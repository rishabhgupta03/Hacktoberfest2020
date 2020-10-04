public class Tree {

  private class Node {
    int value;
    private Node right;
    private Node left;

    public Node(int val) {
        this.value = val; }

    @Override
    public String toString(){
        return "Node= " + value;
    }
  }

  private Node root;

  public void insert(int val){
      var node = new Node(val);

      if (root == null){
          root = node;
        return;
        }

      var current = root;
      while (true) {
          if (val < current.value) {
              if (current.left == null) {
                  current.left = node;
                  break;
              }
              current = current.left;
          }
          else {
              if (current.right == null) {
                  current.right = node;
                  break;
              }
              current = current.right;
          }
      }
  }

    public boolean find(int item){
    var current = root;
      while (current != null){
       if (item < current.value) current = current.left;

      else if (item > current.value) current = current.right;

      else return true;
      }
    return false;
  }

  public void transversePreOrder(){
    transversePreOrder(root);
  }

  public void transversePreOrder(Node root){
    if (root == null ) return;

      System.out.println(root.value);
      transversePreOrder(root.left);
      transversePreOrder(root.right);
  }

  public void transverseInOrder(){
      transverseInOrder(root);
  }
  public void transverseInOrder(Node root){
      if (root == null) return;

      transverseInOrder(root.left);
      System.out.println(root.value);
      transverseInOrder(root.right);
  }

  public void transversePostOrder(){
      transversePostOrder(root);
  }

  public void transversePostOrder(Node root){
      if (root == null) return;

      transversePostOrder(root.left);
      transversePostOrder(root.right);
        System.out.println(root.value);
  }

  public int height(){
     return height(root);
  }

   private int height(Node root){

      if (root == null) return -1;

      if (root.left == null && root.right == null)
          return 0;

      else
      return 1 + Math.max(
              height(root.left),
              height(root.right));
  }

    public int min(){
      return min(root);
    }

    private int min(Node node){

      if(node == null)
          return -1;

    if (node.left == null && node.right == null) return 0;


    var left = min(node.left);
    var right = min(node.right);
    return Math.min(Math.min(left, right), node.value);
    }

}

