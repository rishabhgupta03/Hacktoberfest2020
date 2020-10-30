import java.util.ArrayList;
import java.util.Collections;


public class ProblemTwentyThree {
	public static void main(String args[]) {
		
		long startmilliseconds = System.currentTimeMillis();
		ArrayList<Integer> abundendNumbersList = new ArrayList<Integer>();
		ArrayList<Integer> abundendNumbersAdditionList = new ArrayList<Integer>();
		long total = 0;
		abundendNumbersList = getAbundendNumbersList();
		abundendNumbersAdditionList = getAbundendNumbersAdditionList(abundendNumbersList);
		
		Collections.sort(abundendNumbersAdditionList);
		
		for(int i = 1; i < abundendNumbersAdditionList.get(abundendNumbersAdditionList.size()-1); i++) {
			if(!abundendNumbersAdditionList.contains(i)) {
				total += i;
			}
		}
		long endmilliseconds = System.currentTimeMillis();
		System.out.print(total + "\nTime is: " + (endmilliseconds - startmilliseconds) + " ms");
		
	}

	private static ArrayList<Integer> getAbundendNumbersAdditionList(ArrayList<Integer> abundendNumbersList) {
		// TODO Auto-generated method stub
		ArrayList<Integer> abundendNumbersAdditionList = null;
		try {
			abundendNumbersAdditionList = new ArrayList<Integer>();
			for(int i = 0; i < abundendNumbersList.size(); i++) {
				for(int j = i; j < abundendNumbersList.size(); j++) {
					if(abundendNumbersList.get(i) + abundendNumbersList.get(j) <= 28123) {
						if(!abundendNumbersAdditionList.contains(abundendNumbersList.get(i) + abundendNumbersList.get(j))) {
							int number = abundendNumbersList.get(i) + abundendNumbersList.get(j);
							abundendNumbersAdditionList.add(number);
						}
					}
				}
			}
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return abundendNumbersAdditionList;
	}

	private static ArrayList<Integer> getAbundendNumbersList() {
		// TODO Auto-generated method stub
		int sum = 0;
		ArrayList<Integer> abundendNumbersList = new ArrayList<Integer>();
		for(int i = 1; i < 28124; i++) {
			sum = 0;
			for(int j = 1; j <= i/2; j++) {
				if(i % j == 0) {
					sum += j;
				}
			}
			if(sum > i) {
				abundendNumbersList.add(i);
			}
		}
		return abundendNumbersList;
	}
}