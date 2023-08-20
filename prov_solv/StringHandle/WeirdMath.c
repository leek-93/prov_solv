#include<stdio.h>
/*
P2908 take two numbers, reverse and compare them
for example, 734 will get 437
print larger number between flipped numbers
*/
int main(){
    int input=0, input2=0, new=0, new2=0;
    char temp;
    scanf("%d %d", &input, &input2);

    new=input%10*100+(input/10 - (input/100)*10)*10+input/100;
    new2=input2%10*100+(input2/10 - (input2/100)*10)*10+input2/100;

    if(new >= new2)
        printf("%d", new);
    else
        printf("%d", new2);

    return 0;
}