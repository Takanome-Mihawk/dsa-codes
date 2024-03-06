#include<string.h><stdio.h>
int main()
{
    char str[30];
    char *ptr;
    int vc=0,cc=0;
    printf("enter string\n");
    gets(str);
    ptr=str;
    while(*ptr!='\0')
    {
        if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
            vc++;
        else
            cc++;
        ptr++;
    }
    printf("vowels=%d\nconsonants=%d\n",vc,cc);

}
