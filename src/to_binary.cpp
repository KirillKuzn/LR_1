#include "../include/to_binary.h"

std::string to_binary(unsigned int a){
    std::string result(32, '0');
    
    for (int i = 31; i >= 0; i--){
        if (a == 0){
            return result;
        } else if (a >= (1u << i)){
            result[31 - i] = '1';
            a -= (1u << i);
        }
    }
    return result;
}