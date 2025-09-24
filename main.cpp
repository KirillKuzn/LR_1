#include <iostream>
#include <limits>
#include "include/to_binary.h"

int main(){
    try
    {
        unsigned int a;
        std::cout << "Введите положительное число (до 2^32)";
        std::cin >> a;

        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            throw std::invalid_argument("Ошибка ввода: ожидалось целое число от 0 до 2^32");
        }

        std::cout << to_binary(a) << std::endl;
    } catch(std::invalid_argument& e){
        std::cerr << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}