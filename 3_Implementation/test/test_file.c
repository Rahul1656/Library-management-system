#include"library_management.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}

void test_enter_new_record(void){
    TEST_ASSERT_EQUAL(pass,enter_new_record());
}

void test_view_a_record(void){
    TEST_ASSERT_EQUAL(pass,view_a_record(300));
    TEST_ASSERT_EQUAL(fail,view_a_record(-1));
}

void test_update_record(void){
    TEST_ASSERT_EQUAL(pass,update_record(300));
    TEST_ASSERT_EQUAL(fail,update_record(-1));
}

void test_delete_record(void){
    TEST_ASSERT_EQUAL(pass,delete_record(300));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_enter_new_record);
    RUN_TEST(test_view_a_record);
    RUN_TEST(test_update_record);
    RUN_TEST(test_delete_record);
    return UNITY_END();
}