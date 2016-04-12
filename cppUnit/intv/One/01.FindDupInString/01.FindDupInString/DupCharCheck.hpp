//
//  test.hpp
//  FindRepeatsInString
//
//  Created by John Kao on 3/21/16.
//  Copyright © 2016 John Kao. All rights reserved.
//

#ifndef test_hpp
#define test_hpp

#include <stdio.h>

class DupCharCheck {
    
public:
    static void process(const std::string &inputStr);
    
private:
    std::string myInput;
    DupCharCheck (const std::string &inputStr);
    
};

#endif /* test_hpp */
