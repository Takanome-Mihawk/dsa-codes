#include<stdio.h>
FILE *fptr;
FILE *fptr2;
int main()
{
   int j,i;
   char line[100];
   fptr=fopen("file2.txt","w");
   for(i=0;i<10;)
   {
       j=rand()%10;
       if(j<10)
       {
           i++;
           printf("random number is %d\n",j);
           fprintf(fptr,"%d ",j);
       }
   }
   fclose(fptr);
   fptr=fopen("file2.txt","r");
   fgets( line,100,fptr);
   puts(line);
   fptr2=fopen("file3.txt","w");
   fprintf(fptr2,"%s",line);
   fclose(fptr2);
   fclose(fptr);

}
