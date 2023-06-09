#include<stdio.h>
/*
P11720 take a total number of inputs and inputs in next line(no white spaced)
return sum of inputs 
*/
int main(){
    int num=0, x=0, total=0;
    char ch= 0 ;
    scanf("%d\n", &num);
    for(int i=0; i<num;i++){
        //printf("iter %d\n", i);
        scanf("%c", &ch);
        x = ch - '0';
        total += x;
    }
    printf("%d", total);
    return 0;
}