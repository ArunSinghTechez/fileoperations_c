#include<stdio.h>

int main(){
    char myname[50];
    FILE *file_ptr = fopen("newdata.txt","w");
    if(file_ptr==NULL){
        printf("not done");
        return 0;
    }
    else{

    printf("enter the data ");
    gets(myname);
    fprintf(file_ptr,"%s",myname);
    }
    
fclose(file_ptr);






    return 0;
}