package HashMap;

import java.util.HashSet;
import java.util.Scanner;

public class HappyNumber {

    public static boolean isHappy(int n) {
        if (n <= 0) {

            return false;
        }

        HashSet<Integer> set = new HashSet<Integer>();

        while (true) {
            int square = getSumOfSquare(n);

            if (square == 1) {
                return true;
            } else if (set.contains(square)) {
                return false;
            }

            set.add(square);
            n = square;
        }
    }

    private static int getSumOfSquare(int n) {
        int result = 0;

        while (n > 0) {
            int digit = n % 10;
            n = n / 10;
            result += digit * digit;
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        if (isHappy(n)) {
            System.out.println(n +
                    " is a Happy number");
        }
        else {
            System.out.println(n +
                    " is not a Happy number");
        }
    }
}