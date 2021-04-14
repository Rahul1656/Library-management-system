#include"library_management.h"

/**
 * @brief main function of the project
 * 
 * @return int 
 */
int main(){
    int task,success,ID;
    printf("1. Add a new book\n2. Find a book\n3. Update the status of a book\n4. Delete records of a book\n");
    printf("Enter the task number to perform one of the tasks\n");
    scanf("%d",&task);
    if(task == 1){
        success=enter_new_record();
    }else if(task == 2){
        printf("Enter the ID of the book to search\n");
        scanf("%d",&ID);
        success=view_a_record(ID);
    }else if(task == 3){
        printf("Enter the ID of the book to update\n");
        scanf("%d",&ID);
        success=update_record(ID);
    }else if (task==4){
        printf("Enter the ID of the book to delete\n");
        scanf("%d",&ID);
        success=delete_record(ID);
    }else{
        printf("Wrong input\n");
    }
    if(success == pass){
        printf("Operation successful\n");
    }else if(success == fail){
        printf("Operation unseccessful");
    }else{
        printf("Error condition\n");
    }
    return 0;
}