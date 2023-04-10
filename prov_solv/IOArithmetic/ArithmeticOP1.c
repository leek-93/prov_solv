#include<stdio.h>

/*
P 1008 scan 2 integer values and print A/B
a=1, b=3 -> 0.3333333333
a=4, b=8 -> 0.8
*/
int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("%.9lf", a/b);
    return 0;
    }