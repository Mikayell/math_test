#include <gtest/gtest.h>
#include "myLib.cpp"

TEST(fibTest, test1)
{
	ASSERT_EQ(0, fib(0));
	ASSERT_EQ(1, fib(2));
	ASSERT_EQ(55, fib(10));
	ASSERT_EQ(987, fib(16));
	
}

TEST(isPrimeTest, test1)
{
	ASSERT_EQ(1, isPrime(2));
	ASSERT_EQ(1, isPrime(97));
	ASSERT_EQ(0, isPrime(10));
	ASSERT_EQ(0, isPrime(4));
}

TEST(isPowTest, test1)
{
	ASSERT_EQ(1, isPowOfTwo(2));
	ASSERT_EQ(1, isPowOfTwo(1024));
	ASSERT_EQ(0, isPowOfTwo(97));
	ASSERT_EQ(0, isPowOfTwo(-1));
}

TEST(numOf1sTest, test1)
{
	ASSERT_EQ(1, numOf1s(2));
	ASSERT_EQ(1, numOf1s(8));
	ASSERT_EQ(2, numOf1s(17));
	ASSERT_EQ(6, numOf1s(125));
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
