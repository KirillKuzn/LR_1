#include <gtest/gtest.h>
#include "../include/to_binary.h"

// Проверка нуля
TEST(ToBinaryTest, Zero) {
    EXPECT_EQ(to_binary(0), "00000000000000000000000000000000");
}

// Проверка единицы
TEST(ToBinaryTest, One) {
    EXPECT_EQ(to_binary(1), "00000000000000000000000000000001");
}

// Проверка числа 5
TEST(ToBinaryTest, Five) {
    EXPECT_EQ(to_binary(5), "00000000000000000000000000000101");
}

// Проверка максимального unsigned int
TEST(ToBinaryTest, MaxUInt) {
    EXPECT_EQ(to_binary(4294967295u), "11111111111111111111111111111111");
}

// Проверка степеней двойки
TEST(ToBinaryTest, PowersOfTwo) {
    EXPECT_EQ(to_binary(2), "00000000000000000000000000000010");
    EXPECT_EQ(to_binary(4), "00000000000000000000000000000100");
    EXPECT_EQ(to_binary(8), "00000000000000000000000000001000");
    EXPECT_EQ(to_binary(16), "00000000000000000000000000010000");
}

// Проверка случайного числа
TEST(ToBinaryTest, RandomValue) {
    EXPECT_EQ(to_binary(123456789u), "00000111010110111100110100010101");
}