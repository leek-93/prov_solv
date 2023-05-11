#include<stdio.h>
/*
P3052 take 10 numbers and divid by 42
return the count of different remainder results
*/
int main(){
    int input[10];
    int remainder[10];
    int cnt=0;
    int val[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &input[i]);
    }

    val[0] = input[0]%42;

    //calc the remainders
    int j = 0;
    while(j < 10){
        remainder[j] = input[j]%42;

        //search and count
        //check if remainder is same as value
        //otherwise check previous from array and add count
        if(val[cnt] == remainder[j]){
        }else{
            for(int i =0; i< 10; i++){
                if(remainder[j] == val[i]){
                }else{
                    val[cnt] = remainder[j];
                    cnt++;
                }
                printf("remainder %d, val %d\n", remainder[j], val[i]);
            }
        }

        j++;
    }
    printf("%d", cnt+1);

    return 0;
}