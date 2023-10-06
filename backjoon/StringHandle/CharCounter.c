#include<stdio.h>
/*
P2743 take a word and return the number of each character
*/

int main(){
    int i=0, num=0;
    char string[100];
    while(string[i-1] != '\n'){
        scanf("%c", &string[i]);
        i++;
        num++;
    }
    printf("%d", num-1);
    return 0;
}