
public class ProblemThree {
	static long largestNum = 0;
	public static void main(String args[]) {
		long number = 600851475143L;
		for(long i = 1 ; i < number/2; i++) {
			if(number % i == 0) {
				if(i > largestNum) {
					largestNum = i;
					System.out.print("\nPrime No: " + i);
				}
			}
		}
		System.out.print("Largest prime: " + largestNum);
	}
}
