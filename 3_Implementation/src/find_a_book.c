#include"library_mangement.h"

test_values view_a_record(int id){
    FILE *fptr;
    fptr = fopen("library_data.txt","rb");
    if(fptr==NULL){
        printf("Unable to open the file\n")
        return fail;
    }else{
        book_data new_book;
        while(fread(&new_book, sizeof(new_book), 1, fptr)!='\0'){
            if(id==new_book.book_id){
                printf("Book ID: %d\n", new_book.book_id);
                printf("Title: %s\n", new_book.book_title);
                printf("Status: %s\n", new_book.status);
                printf("Issued by: %s\n", new_book.member_name);
                printf("ID of the member: %d\n", new_book.member_id);
                printf("Date of issue: %s\n", new_book.date_of_issue);
                printf("Due date: %s\n", new_book.due_date);
                fclose(fptr);
                return pass;
            }
        }
        fclose(fptr);
        return fail;
    }   
}