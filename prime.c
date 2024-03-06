#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number\n");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            printf("not a prime\n");
            return 0;
        }
        i++;
    }
    printf("prime number\n");

}
