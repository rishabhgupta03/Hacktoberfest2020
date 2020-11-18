import java.util.Scanner;


public class ProblemEighteen {
	static int jValue = 0;
	public static void main(String args[]) {
		long multiplicationValue = 0;
		int valuesarray[][] = new int[15][15];
		Scanner scanner = new Scanner(System.in);
		for(int i = 0; i < valuesarray.length; i++) {
			for(int j = 0; j <= i; j++) {
				valuesarray[i][j] = scanner.nextInt(); 
			}
		}
		
		for(int i = 0; i < valuesarray.length; i++) {
			multiplicationValue += getMaximumValue(valuesarray, i, jValue);
		}
		
		System.out.print("Value is: " + multiplicationValue);
	}

	private static int getMaximumValue(int[][] valuesarray, int i, int j) {
		int value;
		// TODO Auto-generated method stub
		if(valuesarray[i][j] > valuesarray[i][j+1]) {
			value = valuesarray[i][j];
			jValue = j;
		} else {
			value = valuesarray[i][j+1];
			jValue = j+1;
		}
		return value;
	}
}
