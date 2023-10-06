#include<stdio.h>
/*
P2738 given sizes of two matrix and values, add them and print
*/

int main(){
    int sizeRow, sizeElement;
    scanf("%d %d", &sizeRow, &sizeElement);
    int arrA[sizeRow+1][sizeElement+1], arrB[sizeRow+1][sizeElement+1];

    for(int i=0; i<sizeRow; i++){
        for(int j=0; j<sizeElement; j++){
            scanf("%d", &arrA[i][j]);
        }
    }

    for(int i=0; i<sizeRow; i++){
        for(int j=0; j<sizeElement; j++){
            scanf("%d", &arrB[i][j]);
        }
    }

    for(int i=0; i<sizeRow; i++){
        for(int j=0; j<sizeElement; j++){
            printf("%d ", arrA[i][j] + arrB[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}