import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("1. Add matrices\n" + "2. Multiply matrix by a constant\n" + "3. Multiply matrices\n" +"4. Transpose matrix\n"+ "0. Exit");
        while(true)
        {
            switch(sc.nextInt())
            {
                case 1: addition();
                    break;
                case 2: multiplyConstant();
                    break;
                case 3: multiplyMatrix();
                    break;
                case 4: transposeMatrix();
                break;
                case 0:return;
            }
        }
    }
    public static void addition()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of first matrix:");
        int n1=sc.nextInt();
        int m1=sc.nextInt();
        double[][] one=new double[n1][m1];
        int i,j;
        System.out.println("Enter first matrix:");
        for( i=0;i<n1;i++)
            for( j=0;j<m1;j++)
                one[i][j]=sc.nextDouble();
        System.out.println("Enter size of second matrix:");
        int n2=sc.nextInt();
        int m2=sc.nextInt();
        System.out.println("Enter second matrix:");
        double[][] two=new double[n2][m2];
        double[][] sum=new double[n2][m2];
        for(i=0;i<n2;i++) {
            for (j = 0; j < m2; j++) {
                two[i][j] = sc.nextDouble();
                sum[i][j] = one[i][j] + two[i][j];
            }
        }
        if(n1!=n2||m1!=m2)
        {
            System.out.println("ERROR");
            return;
        }
        System.out.println("The result is:");
        for( i=0;i<n1;i++) {
            for( j=0;j<m1;j++) {
                System.out.print(sum[i][j]+" ");
            }
            System.out.println();
        }
    }
    public static void multiplyConstant()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of matrix:");
        int n1=sc.nextInt();
        int m1=sc.nextInt();
        double[][] one=new double[n1][m1];
        int i,j;
        System.out.println("Enter matrix:");
        for( i=0;i<n1;i++)
            for( j=0;j<m1;j++)
                one[i][j]=sc.nextDouble();
        System.out.println("Enter constant:");
        double multi=sc.nextInt()*1.0;
        System.out.println("The result is:");
        for( i=0;i<n1;i++) {
            for (j = 0; j < m1; j++)
                System.out.print(one[i][j] * multi+" ");
            System.out.println();
        }
    }
    public static void multiplyMatrix()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of matrix:");
        int n1=sc.nextInt();
        int m1=sc.nextInt();
        double[][] one=new double[n1][m1];
        int i,j,k;
        System.out.println("Enter matrix:");
        for( i=0;i<n1;i++)
            for( j=0;j<m1;j++)
                one[i][j]=sc.nextDouble();
        System.out.println("Enter size of second matrix");
        int n2=sc.nextInt();
        int m2=sc.nextInt();
        double[][] two=new double[n2][m2];
        System.out.println("Enter matrix:");
        for( i=0;i<n2;i++)
            for( j=0;j<m2;j++)
                two[i][j]=sc.nextDouble();
        if(m1!=n2)
        {
            System.out.println("ERROR");
            return;
        }
        System.out.println("The result is:");
        double[][] result=new double[n1][m2];
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
                for(k=0;k<n2;k++)
                    result[i][j]+=(one[i][k]*two[k][j]);
            }
        }
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
                System.out.print(result[i][j]+" ");
            System.out.println();
        }
    }
    public static void transposeMatrix() {
        System.out.println("1. Main diagonal\n" + "2. Side diagonal\n" + "3. Vertical line\n" + "4. Horizontal line");
        Scanner sc=new Scanner(System.in);
        int x = sc.nextInt();
        System.out.println("Enter matrix size:");
        int row=sc.nextInt();
        int col=sc.nextInt();
        System.out.println("Enter matrix:");
        int i,j;
        double[][] arr=new double[row][col];
        for(i=0;i<row;i++)
            for(j=0;j<col;j++)
                arr[i][j]=sc.nextDouble();
        System.out.println("The result is:");
        switch (x)
        {
            case 1: mainD(arr,row,col);
                break;
            case 2: sideD(arr,row,col);
                break;
            case 3: vertD(arr,row,col);
                break;
            case 4: horiD(arr,row,col);
        }
    }
    public static void mainD(double[][] arr,int row,int col) {
        int i, j;
        for (i = 0; i < row; i++) {
            for (j = 0; j < col;j++)
                System.out.print(arr[j][i]+" ");
            System.out.println();
        }
    }
    public static void sideD(double[][] arr,int row,int col) {
        int i,j;
        for(i=row-1;i>-1;i--)
        {
            for(j=col-1;j>-1;j--)
                System.out.print(arr[j][i]+" ");
            System.out.println();
        }
    }
    public static void vertD(double[][] arr,int row,int col)
    {
        int i,j;
        for(i=0;i<row;i++)
        {
            for(j=col-1;j>-1;j--)
                System.out.print(arr[i][j]+" ");
            System.out.println();
        }
    }
    public static void horiD(double[][] arr,int row,int col)
    {
        int i,j;
        for(i=row-1;i>-1;i--)
        {
            for(j=0;j<col;j++)
                System.out.print(arr[i][j]+" ");
            System.out.println();
        }
    }
}
