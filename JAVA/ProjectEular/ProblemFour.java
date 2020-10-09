
public class ProblemFour {
	static int maxNum = 0;
	public static void main(String args[]) {
		for(int i = 100; i < 999; i++) {
			for(int j = i; j < 999; j++) {
				int x = i * j;
				int y = reverseInt(x);
				
				if(x == y) {
					if(x > maxNum) {
						maxNum = x;
					}
				}
			}
		}
		System.out.print("Max num: " + maxNum);
	}
	
	public static String reverse(String str) {
		StringBuilder stringBuilder = new StringBuilder();
		for(int i = str.length() -1; i >= 0; i--) {
			stringBuilder.append(str.charAt(i));
		}
		return stringBuilder.toString();
	}
	
	public static int reverseInt(int num) {
        int revNum = 0;
        while (num > 0) {
            int rem = num % 10;
            revNum = (revNum * 10) + rem;
            num = num / 10;
        }
        return revNum;
    }
}