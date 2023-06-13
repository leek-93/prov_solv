#include<stdio.h>
#include<string.h>
/*
P2675 take the number of string and how many times repeat each letter and the word
print letters repeating given the amount of number
*/
int main(){
    int num=0, repeat=0;
    char word[21];
    memset(word, 0, sizeof(char)*21);

    scanf("%d", &num);
    for(int i=0; i< num; i++){
        scanf("%d %s", &repeat, word);
        for(int j=0;j<strlen(word);j++){
            for(int k=0; k<repeat;k++){
                printf("%c", word[j]);
            }
        }
        printf("\n");
    }
    return 0;
}