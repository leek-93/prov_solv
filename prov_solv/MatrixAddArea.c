#include<stdio.h>
/*
P2563 Given information, add numbers and print
*/
int main(){
    //take inputs and store given info
    int paperNum=0, overlap;
    scanf("%d", paperNum);
    int xDist[paperNum], yDist[paperNum];
    for(int i=0; i< paperNum; i++){
        scanf("%d %d", xDist[i], yDist[i]);
    }

    // check if overlap
    for(int i=0; i<paperNum; i++){
        for(int j=0; j<paperNum; j++){
            if(xDist[i] > xDist[j] && xDist[i] < xDist[j]){
            }
        }
    }
    // calculate overlap


    // output
    printf("%d", paperNum*100-overlap);
    return 0;
}