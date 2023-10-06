#include<stdio.h>
/*
P10818 take total number of array and next line the values in array
return smallest and largest values
*/

int main(){
    int total, target;
    scanf("%d", &total);
    int arr[1000] ={0,};
    int arr2[1000] ={0,};

    for(int i=0;i<total;i++){
        scanf("%d", &arr[i]);
    }

    int sNum=arr[0];
    int bNum=arr[0];
    for(int j=0;j<total;j++){
        if(arr[j] > sNum){

        } else{
            sNum = arr[j];
        }
        if(arr[j] < bNum){

        }else{
            bNum = arr[j];
        }
    }


    printf("%d %d", sNum, bNum);

    return 0;
}