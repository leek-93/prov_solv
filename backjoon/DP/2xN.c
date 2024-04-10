/*
    11726 find how many ways of filling 2xN rectangle 
    with 2x1 rectangle
    
*/
#include<stdio.h>
int arr[1001];

int main(){
    int num =0;
    arr[0]=0, arr[1]=1, arr[2]=2;
    scanf("%d", &num);

    for(int i=3; i<=num;i++){
        arr[i] = arr[i-1]+arr[i-2];
        arr[i] %= 10007;
    }
    printf("%d", arr[num]);
    return 0;
}