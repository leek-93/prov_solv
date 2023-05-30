#include<stdio.h>
/*
P3052 take 10 numbers and divid by 42
return the count of different remainder results
*/
int main(){
    int input[10];
    int remainder[10];
    int cnt=0, result =0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &input[i]);
        remainder[i] = input[i]%42;
    }

    //calc the remainders
    int j = 0;
    while(j < 10){
        cnt =0;
        //nested loop for checking every elements
        //if value matches, count variable goes up.
        for(int k=j+1; k<10;k++){
            if(remainder[j] == remainder[k]){
                cnt++;
            }
        }
        if(cnt == 0){
            result++;
        }

        j++;
    }
    printf("%d", result);

    return 0;
}