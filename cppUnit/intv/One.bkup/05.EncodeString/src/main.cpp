//
//  main.cpp
//  EncodeString
//
//  Created by John Kao on 3/24/16.
//  Copyright © 2016 John Kao. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
#include "stdio.h"

class EncodeString {
private:
    std::string str;
    char *buf;
    
public:
    EncodeString (const std::string inStr) {
        str = inStr;
        buf = new char[inStr.length() + 1];
    };
    
    ~EncodeString() {
        if (buf != NULL) {
            delete buf;
        }
    }
    
    const char * encode ();
    void record(int &bufPtr, char lastCh, int countSinceChange) {
        // Must record change if ch is different, or at the end of the string
        std::stringstream ss;
        ss << countSinceChange;
        std::string countStr = ss.str();
        buf[bufPtr++] = lastCh;
        for (int j = 0; j < countStr.length() && bufPtr < str.length(); j++) {
            buf[bufPtr++] = countStr[j];
        }
    }
};


const char * EncodeString::encode () {
    const char * tmpStr = str.c_str();
    
    if (str.length() < 2) {
        // any string less than 2 chars would not receive any benefit
        return tmpStr;
    }
    int strPtr = 0;
    char lastCh = str[strPtr];
    int bufPtr = 0;
    int countSinceChange = 1;
    
    for (strPtr = 1; strPtr < str.length() && bufPtr < str.length(); strPtr++) {
        if (str[strPtr] != lastCh) {
            record(bufPtr, lastCh, countSinceChange);
            lastCh = str[strPtr];
            countSinceChange = 1;
        } else {
            countSinceChange++;
        }
    }
    if (bufPtr < str.length()) {
        record(bufPtr, lastCh, countSinceChange);
    }
    if (strlen(buf) < str.length()) {
        return buf;
    }
    
    
    return tmpStr;
}

int main(int argc, const char * argv[]) {
    
    char *inputArray = new char[256];
    
    while (1) {
        std::cout << "Please input the string to encode:" << std::endl;
        
        std::cin.ignore();
        std::cin.getline(inputArray, 256);
        std::string inputStr(inputArray);
        
        
        std::cout << "String to convert = (" << inputStr << ") chars => " << inputStr.length() << std::endl;
        
        EncodeString *es = new EncodeString(inputStr);
        const char * result = es->encode();
        std::cout << "Result of encode --> (" << result << ") chars => " << strlen(result) <<  std::endl;
        delete es;
    }
    
    
    
    
    return 0;
}
