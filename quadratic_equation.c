#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c;
    double d;
    double k1, k2;

    printf("二次方程式の解を求めます。\n");

    printf("a = "); scanf("%lf", &a);
    printf("b = "); scanf("%lf", &b);
    printf("c = "); scanf("%lf", &c);

    d = b * b - 4 * a * c;

    if(d > 0){
        k1 = (-b + sqrt(d)) / (2 * a);
        k2 = (-b - sqrt(d)) / (2 * a);

        printf("異なる二つの実数解は%.2f、%.2fです。\n", k1, k2);
    }

    if(d == 0){
        k1 = k2 = -b / (2 * a);
        printf("二重解は%.2fです。\n", k1);
    }

    if(d < 0){
        k1 = -b / (2 * a);
        k2 = -b / (2 * a);

        printf("異なる二つの虚数解は%.2f + %.2fi、%.2f - %.2fiです。\n", k1, sqrt(-d) , k2, sqrt(-d));
    }

    return 0;
}
