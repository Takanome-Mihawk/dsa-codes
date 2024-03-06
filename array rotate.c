#include<stdio.h>
int main()
{
    int a[100];
    int n,i,t,r;
    printf("enter no. of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(1)
    {
        printf("\nenter 1 to rotate array\n0 to end");
        scanf("%d",&r);
        if(r==0)
            return 0;
        t=a[n-1];
        for(i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=t;
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
    }
}
