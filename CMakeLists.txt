cmake_minimum_required(VERSION 3.10)
project(LR_1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Установка Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.0
  TLS_VERIFY false
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Создаём библиотеку с to_binary
add_library(to_binary_lib src/to_binary.cpp)
target_include_directories(to_binary_lib PUBLIC include)

# Основной исполняемый файл
add_executable(LR_1 main.cpp)
target_link_libraries(LR_1 PRIVATE to_binary_lib)

# Тесты
enable_testing()
add_executable(tests test/tests.cpp)
target_link_libraries(tests PRIVATE to_binary_lib gtest_main)

add_test(NAME MyProjectTests COMMAND tests)
