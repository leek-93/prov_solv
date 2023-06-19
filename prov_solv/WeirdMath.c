#include<stdio.h>
/*
P2908 take two numbers and flip numbers
for example, 734 will be 437
print larger number between flipped numbers
*/
int main(){
    int inp=0, inp2=0;
    char str[10], temp;
    memset(str, 0, sizeof(char)*10);
    scanf("%d %d", &inp, &inp2);
    str[0] = inp%10;
    str[1] = inp/10 - (inp/100)*10;
    str[2] = inp/100;
    temp = str[0];
    str[0] = str[1];
    str[1] = str[2];
    str[2] = temp;

    return 0;
}