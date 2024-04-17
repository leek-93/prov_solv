/*
    9095 find how many ways of making given n by adding 1 or
    2 or 3
    
*/
#include<stdio.h>
int arr[1001] ={1, 2, 4, 0, };

int main(){
    int tcase=0, num=0;

    for(int i=3; i<11;i++){
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }

    
    scanf("%d", &tcase);
    for(int i =0; i<tcase;i++){
        scanf("%d", &num);
        printf("%d\n", arr[num-1]);
    }
    return 0;
}