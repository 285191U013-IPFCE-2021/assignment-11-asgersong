#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    
    // test boarder of pre
    REQUIRE(sumtail(1,0) == 1);

    // test random
    REQUIRE(sumtail(4, 0) == 10);
    REQUIRE(sumtail(20,0) == 210);
}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    
    // test boarder of pre
    REQUIRE(sumwhile(1) == 1);   // sumwhile(1) must be 1

    // test random
    REQUIRE(sumwhile(2) == 3);   // sumwhile(2) = 1+2 = 3
    REQUIRE(sumwhile (4) == 10); // sumwhile(4) = 1+2+3+4 = 10
    
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    
    // test boarder of pre
    REQUIRE(fib(1,0,1) == 0);

    // test random
    REQUIRE(fib(11,0,1) == 55);

}


