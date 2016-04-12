//
//  main.cpp
//  CheckStringsArePermutation
//
//  Created by John Kao on 3/21/16.
//  Copyright © 2016 John Kao. All rights reserved.
//
//  Check if permutation

#include <iostream>
#include <map>


class GenStrMap {
public:
    static std::map<char, int> * process(const std::string &inStr) {
        std::map<char, int> *newMap = new std::map<char,int>();
        
        for (int i = 0; i<inStr.length(); i++) {
            char ch = inStr[i];
            try {
                newMap->insert(std::pair<char, int>(ch, newMap->at(ch) + 1));
            } catch (const std::out_of_range &oor) {
                // if key does not exist, then simply add the key with a value of 1
                newMap->insert(std::pair<char,int>(ch, 1));
            }
        }
        return newMap;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string str1, str2;
    
    std::cout << "Please insert first string!\n";
    std::cin >> str1;
    std::cout << "Please insert second string!\n";
    std::cin >> str2;
    
    std::map<char, int> *str1Map = GenStrMap::process(str1);
    std::map<char, int> *str2Map = GenStrMap::process(str2);
    
    if (*str1Map == *str2Map) {
        std::cout << "Two strings are permutations of each other" << std::endl;
    } else {
        std::cout << "Two strings are NOT permutations of each other" << std::endl;
        
    }
    delete str1Map;
    delete str2Map;
    
    return 0;
}
