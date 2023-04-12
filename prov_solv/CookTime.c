#include<stdio.h>
/*
P 2525 take current time and cook time and return when 
the food will be done
*/
int main(){
    int hour, minute, cookTime, addToMin, addToH;
    scanf("%d %d %d", &hour, &minute, &cookTime);
    if(hour > 23 || minute > 59){
        printf("Invalid\n");
        return -1;
    }
    addToMin= minute + cookTime;
    if(addToMin < 60){
        printf("%d %d\n", hour, addToMin);
    }else{
        addToH=addToMin/60;
        hour = hour + addToH;
        if(hour <0){
            hour = 23;
        }
        if(hour >=24){
            hour = hour%24;
        }
        minute = addToMin%60;
        if(minute == 60){
            minute = 0;
        }
        printf("%d %d\n", hour, minute);
    }
    return 0;
}