
public class ProblemSix {
	public static void main(String args[]) {
		long sumOfIndividualSquars = 0;
		long sumOfTotalSquare = 0;
		long answer = 0;
		for(int i = 1; i <= 100; i++) {
			sumOfIndividualSquars = sumOfIndividualSquars + (i * i);
			sumOfTotalSquare = sumOfTotalSquare + i;
		}
		sumOfTotalSquare = sumOfTotalSquare * sumOfTotalSquare;
		
		if(sumOfIndividualSquars > sumOfTotalSquare) {
			answer = sumOfIndividualSquars - sumOfTotalSquare;
		} else {
			answer = sumOfTotalSquare - sumOfIndividualSquars;
		}
		System.out.print("Answer: " + answer);
	}
}
