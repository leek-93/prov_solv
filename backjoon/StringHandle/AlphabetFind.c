#include<stdio.h>
#include<string.h>
/*
P10809 take a lower cased word and print the number indicates the location
of the alphabet in the input from a to z
*/
int main(){
    char word[100] = {0,};
    int alphabet[26], num=0;

    memset(alphabet, -1, sizeof(int)*26);
    scanf("%s", word);
    for(int i=0; i<strlen(word); i++){
        num = word[i] - 97;
        if(alphabet[num] == -1){
            alphabet[num] = i;
        }
    }

    for(int i=0; i<26;i++){
        printf("%d ", alphabet[i]);
    }
    return 0;
}