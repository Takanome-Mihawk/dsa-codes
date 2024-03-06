#include<stdio.h>
int main()
{
    int *a;
    int n,i,j;
    printf("enter no. of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                printf("%d ",a[j]);
        }
    }
}
