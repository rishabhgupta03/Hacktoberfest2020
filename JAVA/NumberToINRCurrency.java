public class NumberToINRCurrency {
    public static void main(String[] args) {
        long number = 1000000000000000000L;
        System.out.println(getINRCurrencyFormat(number));
    }

    private static String getINRCurrencyFormat(long number) {
        String numStr = String.valueOf(number);
        String remNumStr = String.valueOf(number);
        if(numStr.length() > 3) {
            numStr = "," + numStr.substring(numStr.length() - 3);
            remNumStr = remNumStr.substring(0, remNumStr.length() - 3);
        }
        while(remNumStr.length() > 2) {
            numStr = "," + remNumStr.substring(remNumStr.length() - 2) + numStr;
            remNumStr = remNumStr.substring(0, remNumStr.length() - 2);
        }
        numStr = remNumStr + numStr;
        return numStr;
    }
}
