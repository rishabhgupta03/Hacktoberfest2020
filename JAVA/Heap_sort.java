public class heap_sort {
    
    public static int compareTo(int i,  int j , boolean isMax ,int arr[]){
        if(isMax)   return  arr[i] -arr[j] ;
        return  arr[j] -arr[i] ;
    }
    // true - increasing else decreasing
    public static void downHeapify(int idx , int n ,boolean isMax ,int arr[] ){

        int li =(idx<<1)+1;
        int ri =(idx<<1)+2;
        int maxidx=idx;

        if(li<=n   && compareTo( li,  maxidx , isMax, arr) >=  0 )    maxidx=li;
        if(ri<=n && compareTo( ri , maxidx , isMax, arr) >= 0 )  maxidx=ri;
        
        if(maxidx!=idx){

            swap(arr,maxidx,idx);
            downHeapify(maxidx , n , isMax , arr );
        }

    }
    public static void sort_it(int arr[]){

        for(int i=arr.length-1 ;i >=0;i--){
            downHeapify(i,arr.length-1, true ,arr);

        }

        for(int i=0;i<arr.length;i++){
            // display(arr);
                swap(arr,0,arr.length-1-i);
                downHeapify( 0 ,arr.length-2-i, true , arr);
        }
    }
    public static  void swap(int arr[] , int i , int j ){

        int x = arr[i];
        arr[i]=arr[j];
        arr[j]=x;
    }


    public  static void main(String args[]){

        
    int arr[]={10,2,5,4,20,50,35,40,39,6,15};
    
    // int arr[]={3,2,1};
    sort_it(arr);
        display(arr);
    // System.out.println();
    }

    public static void display(int arr[]){
        for(int ele : arr){
            System.out.print(ele+ " " );
        } 
        System.out.println();
    }

}
