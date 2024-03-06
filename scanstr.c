#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i,ac=0,dc=0,sc=0,spc=0;
    printf("enter string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
            ac++;
        else if(isdigit(str[i]))
            dc++;
        else if(isspace(str[i]))
           spc++;
        else
            sc++;
    }
    printf("ac=%d\ndc=%d\nspc=%d\nscc=%d\n",ac,dc,spc,sc);

}
