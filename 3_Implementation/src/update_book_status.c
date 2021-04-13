#include"library_management.h"

test_values update_record(int id){
    char new_status[10], new_date_of_issue[10], new_due_date[10], new_member_name[10];
    int new_member_id;
    printf("Enter new status\n");
    scanf("%s", new_status);
    printf("Enter new date of issue\n");
    scanf("%s", new_date_of_issue);
    printf("Enter new due date\n");
    scanf("%s", new_due_date);
    printf("Enter new member name\n");
    scanf("%s", new_member_name);
    printf("Enter new member ID\n");
    scanf("%d", &new_member_id);
    FILE *fptr1;
    FILE *fptr2;
    fptr1 = fopen("library_data.txt","rb");
    fptr2 = fopen("temp_data.txt","wb");
    if(fptr1==NULL){
        printf("Unable to open the file\n");
        return fail;
    }else{
        book_data update_status;
        while(fread(&update_status, sizeof(update_status), 1, fptr1)!='\0'){
            if(id==update_status.book_id){
                strcpy(update_status.status,new_status);
                strcpy(update_status.date_of_issue,new_date_of_issue);
                strcpy(update_status.due_date,new_due_date);
                strcpy(update_status.member_name,new_member_name);
                update_status.member_id=new_member_id;
            }
            fwrite(&update_status, sizeof(update_status), 1, fptr2);            
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("library_data.txt");
        remane("temp_data.txt", "library_data.txt");
        return pass;
    }   
}