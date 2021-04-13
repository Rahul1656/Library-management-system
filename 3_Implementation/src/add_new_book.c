#include"library_management.h"

test_values enter_new_record(){
    FILE *fptr;
    fptr = fopen("library_data.txt","wb");
    if(fptr==NULL){
        printf("Unable to open the file\n");
        return fail;
    }else{
        book_data new_book;
        printf("Enter book id: ");
        scanf("%d", &new_book.book_id);
        fflush(stdin);
        printf("Enter book title: ");
        gets(new_book.book_title);
        strcpy(new_book.status, "Available");
        strcpy(new_book.member_name, "N/A");
        new_book.member_id=0;
        strcpy(new_book.date_of_issue,"N/A");
        strcpy(new_book.due_date,"N/A");
        fwrite(&new_book, sizeof(new_book), 1, fptr);
        fclose(fptr);
        return pass;
    }
}