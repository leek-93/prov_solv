#include<stdio.h>
/*
P2562 take total number of array and next line the values in array
return largest values and index
*/

int main(){
    int arr[9] ={0,};
    int index = 0;
    for(int i=0;i<9;i++){
        scanf("%d", &arr[i]);
    }
    int biggest = arr[0];

    for(int j=0;j<9;j++){
        if(arr[j] < biggest){

        }else{
            biggest = arr[j];
            index = j;
        }
    }


    printf("%d \n%d", biggest, index+1);

    return 0;
}