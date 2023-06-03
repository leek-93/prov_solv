#include<stdio.h>
/*
P10811 take the number of elements and instructions and follow the instruction reversing numbers
print the result
*/

int main(){
    int element=0, inst=0, idx=0, begin, end, temp;
    scanf("%d %d", &element, &inst);

    int arr[element];
    for(int i=0; i<element; i++){
        arr[i] = i+1;
    }

    do{
        scanf("%d %d", &begin, &end);
        for(int i = 0; i<((end-begin+1)/2); i++){
            temp = arr[begin+i-1];
            arr[begin+i-1] = arr[end-i-1];
            arr[end-i-1] = temp;
        }
        idx++;
    }while(idx < inst);

    for(int j = 0; j < element; j++){
        printf("%d ", arr[j]);
    }
    
}