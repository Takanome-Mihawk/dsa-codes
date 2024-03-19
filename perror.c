#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("enefvibhcwic.txt","r");
    if(fptr==NULL)
    {
        perror("Error:");
        return 1;
    }
    return 0;

}
