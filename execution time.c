#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main()
{
    clock_t starttime,endtime;
    double timetaken;
    int i,n=8,n1=9,temp;
    starttime=clock();
    for(i=0;i<1000000000;i++)
    {
       temp=n;
       n=n1;
       n1=temp;

    }
    endtime=clock();
    timetaken=((double)(endtime-starttime))/CLOCKS_PER_SEC;
    printf("time taken =%lf\n",timetaken);


}
