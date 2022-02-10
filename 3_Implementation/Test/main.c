/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include"funs.h"
#include"unity.h"

void setUp()
{

}

void tearDown()
{

}

void test_display_number(void);


int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_display_number);

    return UNITY_END();
}

void test_display_number(void)
{   
    TEST_ASSERT_EQUAL(-1,display_number());
}