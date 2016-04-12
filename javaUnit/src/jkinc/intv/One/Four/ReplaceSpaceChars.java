package jkinc.intv.One.Four;

import java.util.Scanner;

/**
 * Created by jkao on 3/22/16.
 */


class ProcessReplace {

    private static int getSpaceCount(String input) {
        int count = 0;
        for (int i = 0; i < input.length(); i++) {
            if (input.charAt(i) == ' ') {
                count++;
            }
        }
        return count;
    }

    public static char [] convertString(String input) {
        int count = getSpaceCount(input);
        // Calculate size
        int bufSize = input.length() + 1 + 2 * count;
        // Allocate a buffer of that size
        char [] chArr = new char[bufSize];
        // Copy string -- this is a workaround for lack of strcpy
        for (int i = 0; i < input.length(); i++) {
            chArr[i] = input.charAt(i);
        }
        chArr[bufSize - 1] = '\0';

        for (int i = bufSize - 2, j = input.length() - 1; j >= 0; j--, i--) {
            if (chArr[j] != ' ') {
                chArr[i] = chArr[j];
            } else {
                chArr[i--] = '0';
                chArr[i--] = '2';
                chArr[i] = '%';
            }
        }

        return chArr;
    }


}
public class ReplaceSpaceChars {

    public static void main (String [] argv) {
        System.out.println ("Please input the string to convert:");
        Scanner sc = new Scanner(System.in);

        String inputStr = sc.nextLine();
        System.out.println ("String read:(" + inputStr + ")");

        char [] result = ProcessReplace.convertString(inputStr);
        System.out.println (String.format("Converted string --> (%s)", String.valueOf(result)) );
    }
}
