#include "unity.h"
#include "Triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

/*the test posibility for isosceles triangle*/
void test_getTriangleName_given_2_2_5_expect_isosceles(void){
	
	char* TriangleName = getTriangleName(2,2,5);
	TEST_ASSERT_EQUAL_STRING("isosceles", TriangleName);
}
void test_getTriangleName_given_2_5_5_expect_isosceles(void){
	
	char* TriangleName = getTriangleName(2,5,5);
	TEST_ASSERT_EQUAL_STRING("isosceles", TriangleName);
}
void test_getTriangleName_given_10_2_10_expect_isosceles(void){
	
	char* TriangleName = getTriangleName(10,2,10);
	TEST_ASSERT_EQUAL_STRING("isosceles", TriangleName);
}
/*the end posibility for isosceles triangle*/

/*the test posibility for Equilateral triangle*/
void test_getTriangleName_given_2_2_2_expect_Equilateral(void){
	
	char* TriangleName = getTriangleName(2,2,2);
	TEST_ASSERT_EQUAL_STRING("Equilateral", TriangleName);
}
void test_getTriangleName_given_9999_9999_9999_expect_Equilateral(void){
	
	char* TriangleName = getTriangleName(9999,9999,9999);
	TEST_ASSERT_EQUAL_STRING("Equilateral", TriangleName);
}
void test_getTriangleName_given_NEV9999_NEV9999_NEV9999_expect_nonTriangle(void){
	
	char* TriangleName = getTriangleName(-9999,-9999,-9999);
	TEST_ASSERT_EQUAL_STRING("not a Triangle", TriangleName);
}

/*the end posibility for isosceles triangle*/

/*test non triangle*/
void test_getTriangleName_given_10_NEV2_10_expect_nonTriangle(void){
	
	char* TriangleName = getTriangleName(10,-2,10);
	TEST_ASSERT_EQUAL_STRING("not a Triangle", TriangleName);
}
void test_getTriangleName_given_NEV10_2_10_expect_nonTriangle(void){
	
	char* TriangleName = getTriangleName(-10,2,10);
	TEST_ASSERT_EQUAL_STRING("not a Triangle", TriangleName);
}
void test_getTriangleName_given_10_2_NEV10_expect_nonTriangle(void){
	
	char* TriangleName = getTriangleName(10,2,-10);
	TEST_ASSERT_EQUAL_STRING("not a Triangle", TriangleName);
}
void test_getTriangleName_given_10_2_0_expect_nonTriangle(void){
	
	char* TriangleName = getTriangleName(10,2,0);
	TEST_ASSERT_EQUAL_STRING("not a Triangle", TriangleName);
}
void test_getTriangleName_given_10_0_10_expect_nonTriangle(void){
	
	char* TriangleName = getTriangleName(-10,0,10);
	TEST_ASSERT_EQUAL_STRING("not a Triangle", TriangleName);
}
void test_getTriangleName_given_0_2_10_expect_nonTriangle(void){
	
	char* TriangleName = getTriangleName(0,2,10);
	TEST_ASSERT_EQUAL_STRING("not a Triangle", TriangleName);
}
void test_getTriangleName_given_0_0_0_expect_nonTriangle(void){
	
	char* TriangleName = getTriangleName(0,0,0);
	TEST_ASSERT_EQUAL_STRING("not a Triangle", TriangleName);
}
void test_getTriangleName_given_NEV10_NEV10_NEV10_expect_nonTriangle(void){
	
	char* TriangleName = getTriangleName(-10,-10,-10);
	TEST_ASSERT_EQUAL_STRING("not a Triangle", TriangleName);
}
/*end test non triangle*/


/*crazy test*/
void test_getTriangleName_given_largrNum_less_than_64bit_10_NEV10_expect_isosceles(void){
	
	char* TriangleName = getTriangleName(2147483647,10,10);
	TEST_ASSERT_EQUAL_STRING("isosceles", TriangleName);
}
/*END of crazy test*/
void test_Triangle_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement Triangle");
}

void test_add_2_and_3_expect_5(void)
{
	int result = add(2,3);
    TEST_ASSERT_EQUAL_INT(5, result);
}
