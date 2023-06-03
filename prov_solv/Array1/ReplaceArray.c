#include<stdio.h>
/*
P10810 take the size(n) of array and numbers(m) going in the array
each box of array store one number and need to be replaced 
with new number
next lines are 'm' amount of instructions
return what are the numbers in array
*/

int main(){
    int n, m, ball, start, end;
    scanf("%d %d", &n, &m);
    int arr[100] = {0,};

    for(int i=0;i<m;i++){
        scanf("%d %d %d", &start, &end, &ball);
        for(int j=start-1; j<end; j++){
            arr[j] = ball;
        }
    }

    for(int i=0; i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}