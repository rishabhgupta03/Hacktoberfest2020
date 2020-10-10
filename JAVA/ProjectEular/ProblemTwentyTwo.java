import java.io.BufferedReader;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.Collections;



public class ProblemTwentyTwo {
	public static void main(String args[]) {
		int nameValueSum = 0;
		int totalValue = 0;
		ArrayList<String> namesArray = readInput("D:\\p022_names.txt");
		Collections.sort(namesArray);
		for(int i = 0; i < namesArray.size(); i++) {
			nameValueSum = 0;
			for(int j = 0; j < namesArray.get(i).length(); j++) {
				nameValueSum += (namesArray.get(i).charAt(j) - 64);
			}
			totalValue += ((i+1) * nameValueSum);
		}
		
		System.out.print("Total sum: " + totalValue);
	}

	private static ArrayList<String> readInput(String string) {
		// TODO Auto-generated method stub
		String returnArray[] = null;
		ArrayList<String> returnArrayList = new ArrayList<String>();
		try {
			BufferedReader r = new BufferedReader(new FileReader(string));
			String line = r.readLine();
			returnArray = line.split(",");
			for (int i = 0; i < returnArray.length; i++) {
				returnArrayList.add(returnArray[i].replace("\"", ""));
		    }
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return returnArrayList;
	}
}
