#include <stdio.h>
#include <stdbool.h>
#include "unity.h"

void setUp(void)
{
    // set stuff up here
}

void tearDown(void)
{
    // clean stuff up here
}

void test_ex(void)
{
    UNITY_TEST_ASSERT_EQUAL_UINT(1, 2, 17, "Intentionally failing test to sanity check the test setup");    
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_ex);
    return UNITY_END();
}
