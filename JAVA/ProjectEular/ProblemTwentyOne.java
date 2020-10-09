import java.util.ArrayList;


public class ProblemTwentyOne {

	public static void main(String args[]) {
		ArrayList<AmicableItems> amicablePairs = new ArrayList<AmicableItems>();
		ArrayList<Integer> itemsArray = new ArrayList<Integer>();
		int sum = 0;
		int sumOfAmicables = 0;
		
		for(int i = 2; i <= 10000; i++) {
			sum = 0;
			for(int j = 1; j <= i/2; j++) {
				if(i % j == 0) {
					sum += j;
				}
			}
			amicablePairs.add(new AmicableItems(i, sum));
		}
		
		for(int i = 0; i < amicablePairs.size(); i++) {
			for(int j = 0; j < amicablePairs.size(); j++) {
				if(i != j) {
					if(amicablePairs.get(i).getNumber() == amicablePairs.get(j).getSumOfFactors() && amicablePairs.get(j).getNumber() == amicablePairs.get(i).getSumOfFactors()) {
						itemsArray.add(amicablePairs.get(i).getNumber());
					}
				}
			}
		}
		
		for(int i = 0; i < itemsArray.size(); i++) {
			sumOfAmicables += itemsArray.get(i);
		}
		System.out.print("Sum is: " + sumOfAmicables);
	}
	
	static class AmicableItems {
		int number;
		int sumOfFactors;
		
		public AmicableItems(int number, int sumOfFactors) {
			this.number = number;
			this.sumOfFactors = sumOfFactors;
		}

		public int getNumber() {
			return number;
		}

		public int getSumOfFactors() {
			return sumOfFactors;
		}

		public void setNumber(int number) {
			this.number = number;
		}

		public void setSumOfFactors(int sumOfFactors) {
			this.sumOfFactors = sumOfFactors;
		}
	}
}
