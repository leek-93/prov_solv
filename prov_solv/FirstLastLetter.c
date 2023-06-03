#include<stdio.h>
/*
P9086 take the number of cases and each cases as input
print first and last letters
*/
int main(){
    int num=0,j=0;
    char string[100] ={0,};
    scanf("%d", &num);
    printf("num is %d\n", num);
    for(int i=0; i<num;i++){
        do{
            scanf("%c", &string[j]);
            printf("string is %d\n", string[j]);
            j++;
        }while (string[j-1] != '\n');
        printf("%d", string[i]);
    }
    return 0;
}