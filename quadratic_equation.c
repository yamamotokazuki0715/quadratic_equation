#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c;
    double d;
    double k1, k2;

    printf("�񎟕������̉������߂܂��B\n");

    printf("a = "); scanf("%lf", &a);
    printf("b = "); scanf("%lf", &b);
    printf("c = "); scanf("%lf", &c);

    d = b * b - 4 * a * c;

    if(d > 0){
        k1 = (-b + sqrt(d)) / (2 * a);
        k2 = (-b - sqrt(d)) / (2 * a);

        printf("�قȂ��̎�������%.2f�A%.2f�ł��B\n", k1, k2);
    }

    if(d == 0){
        k1 = k2 = -b / (2 * a);
        printf("��d����%.2f�ł��B\n", k1);
    }

    if(d < 0){
        k1 = -b / (2 * a);
        k2 = -b / (2 * a);

        printf("�قȂ��̋�������%.2f + %.2fi�A%.2f - %.2fi�ł��B\n", k1, sqrt(-d) , k2, sqrt(-d));
    }

    return 0;
}
