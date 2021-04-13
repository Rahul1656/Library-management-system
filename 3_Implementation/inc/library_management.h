/**
 * @file librarymanagement.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _LIBRARY_MANAGEMENT_H_
#define _LIBRARY_MANAGEMENT_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief structure for book records
 * 
 */
typedef struct book_data {
    int book_id;
    char book_title[20];
    char status[10];
    char member_name[20];
    int member_id;
    char date_of_issue[10];
    char due_date[10];
}book_data;

/**
 * @brief return type for funtions for unit testing
 * 
 */
typedef enum test_values {
    pass = 1;
    fail = 0;
}test_values;

/**
 * @brief function to find a book by its ID
 * 
 * @param id 
 * @return test_values 
 */
test_values view_a_record(int id);

/**
 * @brief function to add new books to the library
 * 
 * @return test_values 
 */
test_values enter_new_record();

/**
 * @brief function to update the status of a book
 * 
 * @param id 
 * @return test_values 
 */
test_values update_record(int id);

/**
 * @brief funtion to denote discarded books
 * 
 * @param id 
 * @return test_values 
 */
test_values delete_record(int id);

#endif