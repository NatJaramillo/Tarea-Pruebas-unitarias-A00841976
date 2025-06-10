#include <gtest/gtest.h>
#include "../include/math_utils.h"

TEST(MultiplicacionTest, NumerosPositivos) {
    EXPECT_EQ(multiplicar(2, 3), 6);
}

TEST(MultiplicacionTest, Cero) {
    EXPECT_EQ(multiplicar(0, 5), 0);
}

TEST(MultiplicacionTest, Negativos) {
    EXPECT_EQ(multiplicar(-2, 4), -8);
}
