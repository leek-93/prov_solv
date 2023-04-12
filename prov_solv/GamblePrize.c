#include<stdio.h>
/*
P 2480 take 3 different dies' eyes as input and return
the prize.
if 3 same eyes, 10000+1000*numberofeyes
if 2 same eyes, 1000+100*numberofeyes(of same eyes)
if all 3 different, highest number of eyes*100
*/

int main(){
    int dice[3], iter, prize, temp;
    scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);
    for(iter=0;iter<3;iter++){
        if(dice[iter] >6){
            printf("Invalid\n");
        }
    }
    if(dice[0] == dice[1] && dice[1] == dice[2]){
        prize = 10000+1000*dice[0];
    }else{
        if(dice[0]== dice[1] || dice[0]== dice[2]){
            prize = 1000+100*dice[0];
        }else if(dice[1]== dice[2]){
            prize = 1000+100*dice[1];
        }else{
            iter = 0; temp=0;
            while(iter<3){
                if(temp >= dice[iter]){
                    
                }else{
                    temp = dice[iter];
                }
                iter++;
            }
            prize = 100*temp;
        }
    }
    printf("%d", prize);
    return 0;
}