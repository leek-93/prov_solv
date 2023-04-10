#include<stdio.h>

/*
P 2588 take 2 integer values thats between 100 and 999 
and multiply them. each place of second input number should
multiply first input number and also show total
*/
int main(){
    int a=0; int b=0;
    int c[3] = {};

    scanf("%d %d",&a,&b);
    c[0] = b/100; 
    c[1] = b/10 - (b/100)*10; 
    c[2] = b%10;

    printf("%d\n", c[2]*a);
    printf("%d\n", c[1]*a);
    printf("%d\n", c[0]*a);
    printf("%d\n", b*a);
    return 0;
    }