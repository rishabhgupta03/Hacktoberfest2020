import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

// Complete the diagonalDifference function below.
static int diagonalDifference(int[][] arr) {
    int sum=0, sum1=0;
  for(int i=0;i<arr.length;i++)
  {
      for(int j=0;j<arr.length;j++)
      {
          if(i==j)
          {
              sum+=arr[i][j];
          }
          if(i==arr.length-j-1)
          {
              sum1+=arr[i][j];
          }
      }
  }
        int rst= Math.abs(sum-sum1);
    return rst;
}

private static final Scanner scanner = new Scanner(System.in);

public static void main(String[] args) throws IOException {
    BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

    int n = scanner.nextInt();
    scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

    int[][] arr = new int[n][n];

    for (int i = 0; i < n; i++) {
        String[] arrRowItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int j = 0; j < n; j++) {
            int arrItem = Integer.parseInt(arrRowItems[j]);
            arr[i][j] = arrItem;
        }
    }

    int result = diagonalDifference(arr);

    bufferedWriter.write(String.valueOf(result));
    bufferedWriter.newLine();

    bufferedWriter.close();

    scanner.close();
}
}

