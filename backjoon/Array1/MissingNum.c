#include<stdio.h>
/*
P5597 take 28 numbers from 1 to 30 and return whats missing
return value needs to print smallest to larget
*/
int main(){
    int num[30];
    int attendance[30];
    int missing[2] = {0,};

    for(int i = 0; i < 30; i++){
        if(i<28){
            scanf("%d", &attendance[i]);
        }
        num[i] =i+1;
    }

    int j = 0;
    while(j < 30){
        for(int k =0; k<30; k++){
            if(attendance[j] == num[k]){
                num[k] = 0;
            }
        }
        j++;
    }

    for(int k=0; k<30; k++){
        if(num[k] != 0){
            printf("%d\n", num[k]);
        }
    }

    return 0;
}