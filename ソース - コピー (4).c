#include <stdio.h>
#include <string.h>

int main()
{
    char a;

    printf("大文字をいれてください：　")；
        scanf("%c", &a);

    if (a >= 'A' && a <= 'Z')
    {
        printf("'%c' が大文字です", a);
    }
} return 0;


