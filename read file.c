#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    int n;
    fptr=fopen("file1.txt","r");
    if(fptr==NULL)
    {
        perror("error: ");
        return -1;
    }
    if(fscanf(fptr,"%d",&n)==1)
        printf("%d ",n);
    fclose(fptr);
}
