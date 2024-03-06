#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n;
    printf("enter m&n\n");
    scanf("%d%d",&m,&n);
    printf("enter matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                printf("%d ",a[i][j]);
        }
    }

}
