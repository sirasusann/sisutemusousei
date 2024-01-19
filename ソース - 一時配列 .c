#include <stdio.h>
#define MAX 100
int main(void) {

    int a[MAX];
    int k, t, i, s = 0;

    printf("正整数:"); scanf("%d", &t);/*数字を読みこむ*/

    a[0] = t;

    while (t > 0 || t < 0) {          /*読み込んだ数字が０以外のとき繰り返す*/
        printf("正整数:"); scanf("%d", &t);
        if (t == 0) {
            a[s + 1] = 0;
            break;
        }
        for (i = s; i >= 0; i--) {      /*これまでに読み込んだ小さいものから順に比較していき、入力した数字がそれまでに読み込んだ数字より小さい場合そこまでの数字を一つずつずらして間に入れる*/
            if (a[i] > t) {
                for (k = s; k > i; k--) {
                    a[k + 1] = a[k];
                }
                a[i + 1] = t;
                break;
            }
        }
        if (a[0] < t) {/*これまでに入力したものより大きい場合今までのものを一つずつずらす*/
            for (k = s + 1; k >= 0; k--) {
                a[k] = a[k - 1];
            }
            a[0] = t;
        }


        s++;

    }

    printf("入力された整数は小さい順に");        /*入力された数字を表示する*/
    for (t = (s + 1); t >= 0; t--) {
        printf(" %d,", a[t]);
    }
    printf("です\n");

    return 0;
}
