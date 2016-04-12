//
//  test.cpp
//  one.one
//
//  Created by John Kao on 3/21/16.
//  Copyright © 2016 John Kao. All rights reserved.
//

#include <iostream>
#include "DupCharCheck.hpp"

DupCharCheck::DupCharCheck (const std::string &inputStr) {
    
    
}

void DupCharCheck::process(const std::string &inputStr) {
    
    int mapVal = 0;
    for (int i = 0; i < inputStr.length(); i++) {
        int bitVal = 1 << int(inputStr[i]);
        if (mapVal & bitVal) {
            std::cout << "Found repeating character at position " << i << std::endl;
        }
        mapVal |= bitVal;
    }
}
