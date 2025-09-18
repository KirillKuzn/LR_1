#include <iostream>
#include "include/to_binary.h"

int main(){
    unsigned int a;
    std::cin >> a;
    std::cout << to_binary(a) << "\n";
    return 0;
}