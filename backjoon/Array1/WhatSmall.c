#include<stdio.h>
/*
P10871 take total number of array and a number for comparison
and next line the values in array
return smaller values than given number
*/

int main(){
    int total, target;
    int howMany = 0;
    int cnt = 0;
    scanf("%d %d", &total, &target);
    int arr[10000] ={0,};
    int arr2[10000] ={0,};

    for(int i=0;i<total;i++){
        scanf("%d", &arr[i]);
    }

    for(int j=0;j<total;j++){
        if(arr[j] < target){
            arr2[cnt] = arr[j];
            cnt++;
        }
    }

    for(int k=0;k<cnt;k++){
        printf("%d ", arr2[k]);
    }
    return 0;
}