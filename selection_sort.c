#include<stdio.h>
int main()
{
    int *a;
    int n,i,j,t,s;
    printf("enter no. of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        s=i;
        for(j=i+1;j<n;j++)
        {
           if(a[s]>a[j])
                s=j;
        }

        if(i!=s)
        {
            t=a[s];
            a[s]=a[i];
            a[i]=t;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
