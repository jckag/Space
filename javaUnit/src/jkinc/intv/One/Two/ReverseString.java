package jkinc.intv.One.Two;

import java.util.Scanner;

/**
 * Created by jkao on 3/21/16.
 * Reverse String
 */

class Reverse {
    public static String process(char[] inStr) {

        for (int i = 0, j=inStr.length - 1; i < inStr.length / 2; i++, j--) {
            char ch = inStr[i];
            inStr[i] = inStr[j];
            inStr[j] = ch;
        }

        return String.valueOf(inStr);
    }
}

public class ReverseString {

    public static void main(String [] argv) {
        Scanner sc = new Scanner(System.in);
        System.out.print ("Please enter the string to revers");
        String inStr = sc.next();

        System.out.println(String.format("Reversed of (%s) = ", inStr) + Reverse.process( inStr.toCharArray() ) );

    }
}
