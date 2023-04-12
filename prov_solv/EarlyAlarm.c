#include<stdio.h>
#include<math.h>
/*
P 2884 take hour and minute value and set it 45 minutes earlier

*/
int main(){
    int hour=0;
    int minute=0;
    int temp=0;
    scanf("%d %d", &hour, &minute);
    if(hour > 23 || minute > 60){
        printf("Invalid\n");
        return -1;
    }
    temp = minute - 45;
    if(temp < 0){
        hour--;
        if(hour <0){
            hour = 23;
        }
        minute = 60 - abs(temp);
        printf("%d %d\n", hour, minute);
    }else{
        printf("%d %d\n", hour, temp);
    }
    return 0;
}