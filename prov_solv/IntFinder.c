#include<stdio.h>
/*
P10807 take total, numbers, target and return how many target 
numbers in the input
*/

int main(){
    int total, target;
    int i=1;
    int j=0;
    int howMany = 0;
    scanf_s("%d", &total, total);
    int arr[64];
    while(i < total){
        scanf_s("%d ", &arr[i], total);
        i++;
    }
    printf("%d %d", total, i);

    //search
    scanf_s("%d", &target, 1);
    while(j< total){
        if(arr[i] == target){
            howMany++;
        }
        j++;
    }
    printf("%d", howMany);
    return 0;
}