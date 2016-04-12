package jkinc.intv.One.Five;

import java.util.Scanner;

/**
 * Created by jkao on 3/23/16.
 */

class CompressString {

    private static char [] chArr;
    private static int chArrPtr;

    private static void record (char lastCh, int countSinceChange) {
        chArr[chArrPtr++] = lastCh;
        String countStr = String.valueOf(countSinceChange);
        for (int j = 0; j < countStr.length() && chArrPtr < chArr.length; j++) {
            chArr[chArrPtr++] = countStr.charAt(j);
        }
    }

    public static char [] encode(String str) {
        // Anything less than 2 characters is pointless to encode
        if (str.length() <= 2) {
            return str.toCharArray();
        }
        chArr = new char[str.length()];

        //initialize
        chArrPtr = 0;
        char lastCh = str.charAt(0);  // Initialize to the first char of the string
        int countSinceChange = 1;
        for (int i = 1; i < str.length() && chArrPtr < chArr.length; i++) {
            if (str.charAt(i) != lastCh) {

                record(lastCh, countSinceChange);
                lastCh = str.charAt(i);
                countSinceChange = 1;

            } else {
                countSinceChange++;
            }
        }
        if (chArrPtr < chArr.length) {
            record(lastCh, countSinceChange);
        }
        if (chArrPtr >= str.length()) {
            return str.toCharArray();
        }

        return chArr;
    }

}

public class StringCompression {
    static public void main (String [] argv) {
        // Get input string

        while (1 == 1) {
            System.out.println("Please enter a string to encode:");
            Scanner sc = new Scanner(System.in);
            String inputStr = sc.nextLine();
            System.out.println("Read the following string: (" + inputStr + ")");

            System.out.println("encoded string ==>" + String.valueOf(CompressString.encode(inputStr)));
        }

    }
}
