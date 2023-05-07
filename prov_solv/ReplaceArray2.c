#include<stdio.h>
/*
P10813 take the size(n) of array and numbers(m) going in the array
each box has the (index number+1)
next lines are 'm' amount of instructions for what to switch
return what are the numbers in array
*/

int main(){
    int n, m, temp, val1, val2;
    scanf("%d %d", &n, &m);
    int arr[100];
    for(int i=1; i<n+1;i++){
        arr[i] = i;
    }

    for(int i=0;i<m;i++){
        scanf("%d %d", &val1, &val2);
        temp = arr[val1];
        arr[val1] = arr[val2];
        arr[val2] = temp;
    }

    for(int i=1; i<n+1;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}