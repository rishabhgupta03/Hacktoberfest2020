
public class ProblemFive {
	static int answer;
	static int a = Integer.MAX_VALUE;
	public static void main(String args[]) {
		for(int i = 20; i < a; i++) {
			for(int j = 1; j <= 20; j++) {
				if(i % j == 0) {
					if(j == 20) {
						answer = i;
					}
				} else {
					break;
				}
			}
		}
		System.out.print("Number: " + answer);
	}
}