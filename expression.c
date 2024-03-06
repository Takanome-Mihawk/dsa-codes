#include<stdio.h>
int main()
{
    int n,a,i;
    float sum=1;
    printf("enter a number\n");
    scanf("%d",&n);
    i=n;
    for(a=2;a<=n,i>=1;a++,i--)
        sum=sum+(a+1)*i/(float)a;
    printf("sum=%f\n",sum);
}
