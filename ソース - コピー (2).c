#include <stdio.h>

int main(void)
{
    int a;

    printf("��������͂��Ă������� = ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("%d �͋����ł�\n", a);
    }
    else {
        printf("%d �͊�ł�\n", a);
    }

    return 0
}
