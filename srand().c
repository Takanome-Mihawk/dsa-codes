#include<stdio.h>
int main()
{
    int i,j,n,c,p=0;
    srand(time(0));
    do
    {
        printf("want to play?\npress 1 to start\n0 to stop\n");
        scanf("%d",&n);
        if(n!=0&&n!=1)
        {
            printf("bkl");
            return 69;
        }
        if(n==0)
        {
            printf("COWARD\n");
            return -1;
        }
        printf("so you've chosen to play this game? enter a number, if it is equal to the randomly generated number you win 2 points, else -1 is deducted from your points tally, score more than 50 points to win the game.the number is less than 10. best of luck\n");
        scanf("%d",&c);
        if(c>=10||c<0||c/1.0f!=0)
            return 420;
        j=rand()%10;
        if(c==j)
        {
          p=p+2;
          printf("correct guess\n%d\n",c);
          printf("current score=%d\n",p);
        }

        if(c!=j)
        {
            p--;
            printf("wrong guess\nyour guess=%d , number is %d\n",c,j);
            printf("current score=%d\n",p);
        }

        if(p>=50)
        {
            printf("congragulations. you have defeated me;)");
            return 0;
        }
    }while(n!=0);
}
