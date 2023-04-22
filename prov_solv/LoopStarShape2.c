#include<stdio.h>
/*
P2438 take number of lines and print * character each line
*/

int main(){
    int numLine;
    int i =0;
    scanf("%d",&numLine);
    while(i<numLine){
        for(int j=0;j<numLine-(i+1);j++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
        i++;
    }
    return 0;
}