#include<stdio.h>
/*
P2563 Given information, add numbers and print
*/
int main(){
    int paperNum=0, area=0, x=0, y=0, count=0;
    scanf("%d", &paperNum);
    int map[101][101] ={0, };
    
    for(int i=0; i< paperNum; i++){
        scanf("%d %d", &x, &y);
        for(int j=x; j<x+10; j++){
            for(int k=y; k<y+10; k++){
                map[j][k] = 1;
            }
        }
    }

    for(int i=0; i< 100; i++){
        for(int j=0; j<100; j++){
            if(map[i][j] == 1){
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}