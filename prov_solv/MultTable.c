#include<stdio.h>
/*
P 2739 take a number and creat multiplication table using loop
*/
int main(){
    int num, iter;
    scanf("%d", &num);

    iter=1;
    while(iter<10){
        printf("%d * %d = %d\n", num, iter, num*iter);
        iter++;
    }

    return 0;
}