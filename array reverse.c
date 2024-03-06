#include<stdio.h>
int main()
{
    int a[100];
    int arev[100];
    int n,i,j;
    printf("enter no. of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
        arev[i]=a[j];
    for(i=0;i<n;i++)
        printf("%d ",arev[i]);
}
