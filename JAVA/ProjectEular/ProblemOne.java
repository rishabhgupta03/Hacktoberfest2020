
public class ProblemOne {
	static long total = 0;
	public static void main(String args[]) {
		for(int i = 0; i < 1000; i++) {
			if(i % 3 == 0 || i % 5 == 0) {
				total += i;
			}
		}
		System.out.print(String.valueOf(total));
	}
}
