#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
P2908 take two numbers and flip numbers
for example, 734 will be 437
print larger number between flipped numbers
*/
int main(){
    int inp=0, inp2=0, x=0, y=0;
    char str[10], temp;
    memset(str, 0, sizeof(char)*10);
    scanf("%d %d", &inp, &inp2);
    str[0] = inp%10;
    str[2] = inp/100;
    x=atoi(str[2])*100+atoi(str[1])*10+atoi(str[0]);
    printf("%d", x);

    str[0] = inp2%10;
    str[2] = inp2/100;
    temp = str[0];
    str[0] = str[2];
    str[2] = temp;
    y=atoi(str);

    if(x>=y){
        printf("%d", x);
    }else{
        printf("%d", y);
    }

    return 0;
}