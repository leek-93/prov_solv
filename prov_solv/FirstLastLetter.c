#include<stdio.h>
#include<string.h>
/*
P9086 take the number of cases and each cases as input
print first and last letters
*/
int main(){
    int num=0,j=0;
    char string[100];
    char result[32];
    scanf("%d", &num);
    for(int i=0; i<num;i++){
        scanf("%s", string);
        printf("%d", strlen(string));
        result[j] = string[i];
        j++;
        result[j] = string[i+strlen(string)-1];
        j++;
    }
    for(int i=0;i<j;i++){
        printf("%c", result[i]);
    }

    return 0;
}