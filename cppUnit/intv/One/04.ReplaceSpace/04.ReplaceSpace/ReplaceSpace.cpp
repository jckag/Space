//
//  ReplaceSpace.cpp
//  04.ReplaceSpace
//
//  Created by John Kao on 4/11/16.
//  Copyright © 2016 John Kao. All rights reserved.
//

#include "ReplaceSpace.hpp"

int ReplaceSpace::countSpace(std::string str) {
    std::string::iterator it = str.begin();
    
    int count = 0;
    while (it != str.end()) {
        if (*it == ' ') {
            count++;
        }
        it++;
    }
    
    return count;

}

char * ReplaceSpace::process(std::string inStr) {
    
    int totalSpace = int(inStr.length()) + countSpace(inStr) * 2;
    
    // Allocate the amount of space.
    char * buffer = new char[totalSpace + 1];
    
    std::string::reverse_iterator rit = inStr.rbegin();
    
    int bPtr = totalSpace;
    buffer[bPtr--] = '\0';
    while (rit != inStr.rend()) {
        if (*rit == ' ') {
            buffer[bPtr--] = '0';
            buffer[bPtr--] = '2';
            buffer[bPtr--] = '%';
        } else {
            buffer[bPtr--] = *rit;
        }
        rit++;
    }
    
    return buffer;
    
}
