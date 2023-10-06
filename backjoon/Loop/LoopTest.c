#include<stdio.h>
/*
P 10950 take number of how many cases and then 2 int values
print sum of 2 int values for the number of times
*/
int main(){
    int num, iter;
    scanf("%d", &num);
    int a[num+1], b[num+1];
    iter = 0;
    while(iter<num){
        scanf("%d %d", &a[iter], &b[iter]);
        iter++;
    }
    iter=0;
    while(iter<num){
        printf("%d\n", a[iter]+b[iter]);
        iter++;
    }
    return 0;
}