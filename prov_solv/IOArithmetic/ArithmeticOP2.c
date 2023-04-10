#include<stdio.h>

/*
P 10430 scan 3 integer values and print (a+b)%c, (((a%c)+(b%c))%c)
(a*b)%c, (((a%c)*(b%c))%c)) each line
*/
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a+b)%c);
    printf("%d\n", (((a%c)+(b%c))%c));
    printf("%d\n", (a*b)%c);
    printf("%d ", (((a%c)*(b%c))%c));
    return 0;
    }