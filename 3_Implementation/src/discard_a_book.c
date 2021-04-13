#include"library_management.h"

test_values delete_record(int id){
    FILE *fptr1;
    FILE *fptr2;
    fptr1 = fopen("library_data.txt","rb");
    fptr2 = fopen("temp_data.txt","wb");
    if(fptr1==NULL){
        printf("Unable to open the file\n");
        return fail;
    }else{
        book_data discarded_book;
        while(fread(&discarded_book, sizeof(discarded_book), 1, fptr1)!='\0'){
            if(id==discarded_book.book_id){
               continue;
            }
            fwrite(&discarded_book, sizeof(discarded_book), 1, fptr2);            
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("library_data.txt");
        remane("temp_data.txt", "library_data.txt");
        return pass;
    }   
}