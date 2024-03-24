#include<stdio.h>
int main(void){
    FILE *file_ptr;
    char new_file[]="take_file.txt";
    file_ptr=fopen(new_file,"w");
    if(file_ptr==NULL){
        printf("error\n");
        return(-1);
    }
    else {
        fprintf(file_ptr,"hello we are rewritten and have a good practice of writing text in file mode\n");
    }

    fclose(file_ptr);


    return 0;
}