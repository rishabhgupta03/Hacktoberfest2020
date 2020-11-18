//to find contiguous sub-array whose sum is max.
//Largest Sum Contiguos Subarray

public class KadaneProblem {
public static void main(String[] args) {
   int arr[]={-2,-3,4,-1,-2,1,5,2,-3};  //input array
   int maxsumsofar=0;
   int currsum=0;

   for(int i=0;i<arr.length;i++){
       int sum=arr[i]+currsum;
       if(sum>0){
           currsum=sum;
           if(maxsumsofar<currsum){              
           maxsumsofar=currsum;
       }
   }
     }
    System.out.println(maxsumsofar);    //printing output
}    
}
