
public class ProblemSeven {
	public static void main(String args[]) {
		int neededPrime = 2;
		int count = 1;
		for(int i = 2; i < Integer.MAX_VALUE; i++) {
			if(isPrime(i)) {
				if(i > neededPrime) {
					neededPrime = i;
					count += 1;
					if(count == 10001) 
						break;
				}
			}
		}
		System.out.print(neededPrime);
	}

	private static boolean isPrime(int abc) {
		// TODO Auto-generated method stub
		for(int i = 2; i <= abc / 2; i++) {
            if(abc % i == 0) {
                return false;
            }
        }
        return true;
	}
}