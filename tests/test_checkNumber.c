#include "unity.h"
#include "../include/check_number.h"  // Adjusted path to include the header



void setUp(void) 
{
   

}



void tearDown(void) 
{
   
} 

void test_even_number_edgeCase(void) 
{

    TEST_ASSERT_EQUAL_STRING("The number is even.", checkNumber(0));

}



void test_even_number(void) 
{

    TEST_ASSERT_EQUAL_STRING("The number is even.", checkNumber(2));
    
    TEST_ASSERT_EQUAL_STRING("The number is even.", checkNumber(4));
    
    TEST_ASSERT_EQUAL_STRING("The number is even.", checkNumber(6));

}



void test_odd_number(void) 
{

    TEST_ASSERT_EQUAL_STRING("The number is odd.", checkNumber(1));
    
    TEST_ASSERT_EQUAL_STRING("The number is odd.", checkNumber(3));
    
    TEST_ASSERT_EQUAL_STRING("The number is odd.", checkNumber(5));

}



void test_negative_even_number(void) 
{

    TEST_ASSERT_EQUAL_STRING("The number is even.", checkNumber(-2));

    TEST_ASSERT_EQUAL_STRING("The number is even.", checkNumber(-4));

}



void test_negative_odd_number(void) 
{

    TEST_ASSERT_EQUAL_STRING("The number is odd.", checkNumber(-1));

    TEST_ASSERT_EQUAL_STRING("The number is odd.", checkNumber(-3));

}



void test_large_even_number(void) 
{

    TEST_ASSERT_EQUAL_STRING("The number is even.", checkNumber(1000000000));

}



void test_large_odd_number(void) 
{

    TEST_ASSERT_EQUAL_STRING("The number is odd.", checkNumber(999999999));
}



void test_small_numbers(void) 
{

    TEST_ASSERT_EQUAL_STRING("The number is odd.", checkNumber(1));

    TEST_ASSERT_EQUAL_STRING("The number is odd.", checkNumber(-1));

}



int main(void) 
{

    UNITY_BEGIN();

    RUN_TEST(test_even_number_edgeCase);

    RUN_TEST(test_even_number);

    RUN_TEST(test_odd_number);

    RUN_TEST(test_negative_even_number);

    RUN_TEST(test_negative_odd_number);

    RUN_TEST(test_large_even_number);

    RUN_TEST(test_large_odd_number);

    RUN_TEST(test_small_numbers);

    return UNITY_END();

}