#include<stdio.h>
/*
P 1330 take 2 integer values and compare with branching
print the result with '<', '>', or '=='
*/
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(a<b){
        printf("<");
    } else if (a>b){
        printf(">");
    }else{
        printf("==");
    }
}