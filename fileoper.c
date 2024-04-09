#include<stdio.h>

int main(void){
    int n = 2;
    int i;
    char file[]= "datafile.txt";
    FILE *file_ptr;
    char data[100];
    file_ptr = fopen(file,"w");

    if(file_ptr == NULL){
        printf("error,go back\n");
        return(-1);
    }
    else{
        for(i=0;i<=n;i++){
            printf("enter the data into the file\n");
            gets(data);
            fprintf(file_ptr,"%d : %s\n",i,data);
        }
    }
    fclose(file_ptr);

    return 0;
}