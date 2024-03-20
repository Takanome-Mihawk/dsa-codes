#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    int i=0;
    char c;
    fptr=fopen("file1.txt","r");
    if(fptr==NULL)
    {
        perror("error: ");
        return -1;
    }
    while((c=fgetc(fptr))!=EOF)// while((c=fgetc(fptr))!=EOF)                   while(fscanf(fptr,"%c",&c)!=EOF)
    {
        printf("%c",c);
        i++;
    }
    fclose(fptr);
}
