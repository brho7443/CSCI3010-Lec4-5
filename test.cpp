#define CATCH_CONFIG_MAIN

#include "functions_to_implement.cpp"
#include "catch.hpp"
#include <vector>

TEST_CASE("Positive sum computed", "[sum]")
{
    std::vector<int> nums = {1,1,1,1};
    CHECK(Sum(nums) == 4);
}

TEST_CASE("Negative sum computed","[sum]")
{
    std::vector<int> nums = {-1,-2,-3,-4};
    CHECK(Sum(nums) == -10);
}

TEST_CASE("Factorial function","[factorial]")
{
    REQUIRE(Factorial(0) == 1);
    REQUIRE(Factorial(1) == 1);
    CHECK(Factorial(5) == 120);
}

TEST_CASE("AddN function", "[AddN]")
{
    std::vector<int> nums = {1, 2, 3};
    std::vector<int> result = AddN(nums, 5);
    std::vector<int> expected = {6, 7, 8};
    CHECK(result == expected);
}

TEST_CASE("SubN int function", "[SubN]")
{
    std::vector<int> nums = {6, 7, 8};
    std::vector<int> result = SubtractN(nums, 2);
    std::vector<int> expected = {4, 5, 6};
    CHECK(result == expected);
}

TEST_CASE("SubN double function", "[SubN]")
{
    std::vector<double> nums = {6.99, 7.99, 8.99};
    std::vector<double> result = SubtractN(nums, 2.41);
    std::vector<double> expected = {4.58, 5.58, 6.58};
    CHECK(result == expected);
}


