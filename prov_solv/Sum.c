#include<stdio.h>
/*
P 8393 take an integer value and return sum of 1~num
*/
int main(){
    int num;
    int sum=0;
    scanf("%d", &num);
    for(int i=1;i<num+1;i++){
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}