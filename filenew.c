#include<stdio.h>

int main(void){
    FILE *file_ptr;
    char file_name[]="file_new.txt";
    file_ptr = fopen(file_name,"w");
    if(file_ptr==NULL){
        printf("operation failed\n");
        return(-1);
    }
    else {
        for (int i =0;i<10;i++){
        fprintf(file_ptr,"hello value written in file\n");
        }
    }


    fclose(file_ptr);
    return 0;
}