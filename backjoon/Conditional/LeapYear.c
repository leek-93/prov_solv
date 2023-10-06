#include <stdio.h>
/*
P 2753 take a year as parameter and return 1 if its leap year
return 0 otherwise
*/
int main(){
    int year;
    scanf("%d", &year);
    if(year < 1 || year > 4000){
        printf("Incorrect input\n");
    }
    if(year%400 == 0){
        printf("1");
    }else{
        if(year%100 == 0){
            printf("0");
        }else{
            if(year%4 == 0){
                printf("1");
            }else{
                printf("0");
            }
        }
    }
    return 0;
}