#include<stdio.h>
int main()
{
    int i;
    double n,guess,precision;
    printf("enter numbers\n");
    scanf("%lf",&n);
    guess=n/2.0f;
    precision=0.00000001;
    if(n<0)
    {
        printf("square root in imaginary\n");
        return -1;
    }
    while(((guess*guess)-n)>precision)
    {
        guess=(guess+n/guess)/2.0f;
    }
    printf("square root=%lf\n",guess);

}
