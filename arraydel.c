#include<stdio.h>
int main()
{
    int *a;
    int n,i,k;
    printf("enter no. of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter key\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
            break;
    }
    for(i=i;i<n;i++)
        a[i]=a[i+1];
    a[n-1]=0;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
