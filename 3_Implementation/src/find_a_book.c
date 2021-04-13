#include"library_management.h"

test_values view_a_record(int id){
    FILE *fptr;
    fptr = fopen("library_data.txt","rb");
    if(fptr==NULL){
        printf("Unable to open the file\n");
        return fail;
    }else{
        book_data book_to_find;
        while(fread(&book_to_find, sizeof(book_to_find), 1, fptr)!='\0'){
            if(id==book_to_find.book_id){
                printf("Book ID: %d\n", book_to_find.book_id);
                printf("Title: %s\n", book_to_find.book_title);
                printf("Status: %s\n", book_to_find.status);
                printf("Issued by: %s\n", book_to_find.member_name);
                printf("ID of the member: %d\n", book_to_find.member_id);
                printf("Date of issue: %s\n", book_to_find.date_of_issue);
                printf("Due date: %s\n", book_to_find.due_date);
                fclose(fptr);
                return pass;
            }
        }
        fclose(fptr);
        return fail;
    }   
}