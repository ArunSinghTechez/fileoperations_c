#include<stdio.h>

int main(){

    int i,n=2;
    char str[50];

    FILE *fptr=fopen("sample.txt","w");
    if (fptr==NULL){
        printf("file cannot opened");
        return 0;
    }
    else{

        for (int i =0;i<n;i++){
            puts("enter te name");
            gets(str);
            fprintf(fptr,"%d-------%s\n",i,str);
        }
        fclose(fptr);




  }
    return 0;
}