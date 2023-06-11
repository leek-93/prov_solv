#include<stdio.h>
#include<string.h>
/*
P2675 take the number of string and how many times repeat each letter and the word
print letters repeating given the amount of number
*/
int main(){
    int num=0, repeat=0;
    char word[20];
    memset(word, 0, sizeof(int)*20);

    scanf("%d", &num);
    for(int i=0; i< num; i++){
        scanf("%d %s", &repeat, word);
        for(int j=0;j<strlen(word);j++){
            for(int k=0; k<repeat;k++){
                printf("%c", word[j]);
            }
        }
    }
    return 0;
}