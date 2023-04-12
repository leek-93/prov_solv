#include<stdio.h>
/*
P 14681 take x and y values and print which quadrant it is located
*/
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>0){
        if(y>0){
            printf("1");
        }else{
            printf("4");
        }
    } else{
        if(y>0){
            printf("2");
        }else{
            printf("3");
        }
    }
    return 0;
}