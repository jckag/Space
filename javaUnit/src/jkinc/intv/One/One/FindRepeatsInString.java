package jkinc.intv.One.One;

import java.util.Scanner;

/**
 * Created by jkao on 3/21/16.
 */
public class FindRepeatsInString {
    public static void main(String [] args) {

        System.out.print("Please enter a string: ");

        Scanner scanner = new Scanner(System.in);

        String input = scanner.next();

        int mapVal = 0;

        for (int i = 0; i < input.length(); i++) {

            int bitVal = 1 << Character.getNumericValue(input.charAt(i));

            if ((mapVal & bitVal) != 0) {
                System.out.println (String.format("Found repeat at character %d", i));
                break;
            }
            mapVal |= bitVal;
        }


    }

}
