#include<stdio.h>
int main()
{
    int n, rev=0, r, n1;
    printf("enter number\n");
    scanf("%d", &n);
    n1 = n;
    while(n != 0)
    {
        r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;
    }
    printf("%d\n", rev);
    if(n1 == rev)
        printf("palindrome\n");
    else
        printf("not palindrome\n");
}
