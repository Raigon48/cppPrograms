/*
    input : 12,34,56
    output : [12 , 34 , 56] print it as 12 \n 34 \n 56
*/

#include <sstream>
#include <vector>
#include <iostream>

std::vector<int> parseInts(std::string str) {
    std::vector<int> arr;
	std::stringstream ss(str);
    int input;
    
    while(ss>>input)
    {
        arr.push_back(input);
        ss.ignore(1,',');
    }
    return arr;
}

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    
    return 0;
}