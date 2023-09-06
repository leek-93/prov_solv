#include<stdio.h>
/*
P2566 given 9x9 matrix, find biggest value and location
*/

int main(){
    int arr[10][10] = {0,};
    int biggest = 0, row, column;

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j] > biggest){
                biggest = arr[i][j];
                row = i;
                column = j;
            }
        }
    }

    printf("%d\n%d %d", biggest, row+1, column+1);
}