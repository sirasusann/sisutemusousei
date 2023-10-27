#include <stdio.h>

int main(void)
{
    int a;

    printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ = ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("%d ‚Í‹ô”‚Å‚·\n", a);
    }
    else {
        printf("%d ‚ÍŠï”‚Å‚·\n", a);
    }

    return 0
}
