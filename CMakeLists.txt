cmake_minimum_required(VERSION 3.10)
project(LR_1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавляем исполняемый файл
add_executable(LR_1 main.cpp src/to_binary.cpp)

# Подключаем директорию с заголовками
target_include_directories(LR_1 PRIVATE include)
