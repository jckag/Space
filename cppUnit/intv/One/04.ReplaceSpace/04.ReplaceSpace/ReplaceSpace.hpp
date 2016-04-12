//
//  ReplaceSpace.hpp
//  04.ReplaceSpace
//
//  Created by John Kao on 4/11/16.
//  Copyright © 2016 John Kao. All rights reserved.
//

#ifndef ReplaceSpace_hpp
#define ReplaceSpace_hpp

#include <iostream>


class ReplaceSpace {

private:
    static int countSpace(std::string str);

public:
    
    static char * process(std::string inStr);

};

#endif /* ReplaceSpace_hpp */
