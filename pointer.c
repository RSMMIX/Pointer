#include<stdio.h>
#include<stdlib.h>
int main()
{
    //input : ABCCCDDEFGGGGGGHHHIJKL   output : ABCDEFGHIJKL
    char str[100];
    scanf("%s",str);
    printf("%c",*str);
    for (size_t i = 1; *(str+i) != '\0'; i++)
    {
        if(*(str+i) != *(str+i-1))
        {
            printf("%c",*(str+i));
        }
    }
    return 0;
}