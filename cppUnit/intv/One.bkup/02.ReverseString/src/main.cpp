//
//  main.cpp
//  one.two
//
//  Created by John Kao on 3/21/16.
//  Copyright © 2016 John Kao. All rights reserved.
//  Reverse String
//

#include <iostream>
#include "stdio.h"

void reverse (char * str) {
    if ( !str || strlen(str) <= 1 )
        // Nothing needs to be done
        return;
    
    char *ptr1 = str;  // Point to first char
    char *ptr2 = str + strlen(str) - 1;  // point to last char
    
    // Repeat until ptr1 and ptr2 point to the same char (odd number of chars)
    // or ptr1 is one away from ptr2 (even number of chars)
    while (ptr1 != ptr2 && ptr1 + 1 != ptr2) {
        char tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
        ptr1++; ptr2--;
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::string inputStr;
    std::cin >> inputStr;
    
    char * copyStr = new char[inputStr.length() + 1];
    
    strcpy(copyStr, inputStr.c_str());
    std::cout << "Before ==> " << copyStr << std::endl;
    
    reverse(copyStr);
    std::cout << "After ==> " << copyStr << std::endl;
    
    
    return 0;
}
