//
//  main.cpp
//  one.one
//
//  Created by John Kao on 3/21/16.
//  Copyright © 2016 John Kao. All rights reserved.
//

#include <iostream>
#include "DupCharCheck.hpp"



int main(int argc, const char * argv[]) {
    // insert code here...
    std::string inputString;
    std::cout << "Please enter the input string\n";
    std::cin >> inputString;
    std::cout << "Input is " << inputString << std::endl;
    
    DupCharCheck::process(inputString);
    
    return 0;
}
