package jkinc.intv.One.Three;

import java.util.Map;
import java.util.Scanner;
import java.util.HashMap;
import java.util.jar.Pack200;

/**
 * Created by jkao on 3/21/16.
 * String Permutation
 *
 * This can be completed by checking to see if the count of each character map is same as the other.
 */

class GenStrMap {
    static public Map<Character, Integer> process(String inStr) {

        Map<Character, Integer> newMap = new HashMap<Character, Integer>();
        for (int i = 0; i < inStr.length(); i++) {
            char ch = inStr.charAt(i);
            if (newMap.get(ch) == null) {
                newMap.put(ch, 1);
            } else {
                newMap.put(ch, newMap.get(ch) + 1);
            }
        }

        return newMap;
    }
}

public class CheckStringsArePermutation {

    public static void main(String [] argv) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Input first string");
        String str1 = sc.next();

        System.out.println("Input second string");
        String str2 = sc.next();

        Map<Character, Integer> str1Map = GenStrMap.process(str1);
        Map<Character, Integer> str2Map = GenStrMap.process(str2);

        if (str1Map.equals(str2Map)) {
            System.out.print("Strings are permutations of each other");
        } else {
            System.out.print("Strings are NOT permutations of each other");
        }

    }
}
