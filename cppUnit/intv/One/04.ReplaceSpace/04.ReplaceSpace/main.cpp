//
//  main.cpp
//  04.ReplaceSpace
//
//  Created by John Kao on 3/26/16.
//  Copyright © 2016 John Kao. All rights reserved.
//

#include <iostream>
#include "ReplaceSpace.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    char buffer[1024];
    std::cin.getline(buffer, 1024);
    std::cout << "Received (" << buffer << ")" << std::endl;
    
    std::cout << "Converted String ==> (" << ReplaceSpace::process(buffer) << ")" << std::endl;
    return 0;
}
