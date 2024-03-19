#include<stdio.h>
FILE *fptr;
int main()
{
    srand(time(0));
    int j,i,c,r0,r1;
    printf("enter range of numbers lower range and upper range\n");
    scanf("%d%d",&r0,&r1);
    printf("enter number of random numbers to generate\n");
    scanf("%d",&c);
    fptr=fopen("file1.txt","w");
    for(i=0;i<c;)
    {
        j=rand()/15;
        if(j>=r0&&j<=r1)
        {
            printf("random number: %d\n",j);
            i++;
            fprintf(fptr,"%d ",j);

        }

    }
    fclose(fptr);

}

