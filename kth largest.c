#include<stdio.h>
int main()
{
    int a[100];
    int b[100];
    int n,i,j,k,t;
    printf("enter no. of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter value of k\n");
    scanf("%d",&k);
    if(k<=0)
        return 0;
    for(i=0;i<n;i++)
        b[i]=a[i];
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(b[j]>b[j+1])
            {
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
        }
    }
    printf("kth largest element is %d\n",b[n-k]);
}
