#include<stdio.h>

int main(void){
    FILE *file_ptr;
    char newfile[]="get_file.txt";
    file_ptr = fopen(newfile,"w");
    if (file_ptr==NULL){
        printf("error open\n");
        return(-1);
    }
    else{
        fprintf(file_ptr,"yes data written\n");
    }




    return 0;
}