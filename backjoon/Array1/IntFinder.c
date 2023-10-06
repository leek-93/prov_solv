#include<stdio.h>
/*
P10807 take total, numbers, target and return how many target 
numbers in the input
*/

int main(){
    int total, target;
    int i=0;
    int j=0;
    int howMany = 0;
    scanf("%d", &total);
    int arr[128] ={0,};
    for(i=0;i<total;i++){
        scanf("%d", &arr[i]);
    }

    //search
    scanf("%d", &target);
    for(j=0;j<total;j++){
        if(arr[j] == target){
            howMany++;
        }
    }
    printf("%d", howMany);
    return 0;
}