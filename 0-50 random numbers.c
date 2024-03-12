#include<stdio.h>
#include<stdlib.h>
FILE *fptr;
int main()
{
    int i,j,t,p;
    char str[10];
    fptr = fopen("file1.txt", "w");
    for(i=0;i<50;)
    {
      j=rand();
      t=j/10;
      p=t/5;
      if(p<=50)
      {
          i++;
          printf("random number is %d\n",p);
          fprintf(fptr, "%d ",p);
      }
    }
    fclose(fptr);
}
