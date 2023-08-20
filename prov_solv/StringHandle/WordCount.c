#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
P1152 take a line of strings and print how many words are contained
*/
int main(){
    int count=0, i=0;
    char *string = (char *)malloc(sizeof(char) * 10000001);
    fgets(string, 10000001, stdin);
    if(string[0] == '\n' || (string[0] == ' ' && string[1] == '\n')){
        printf("0");
        return 0;
    }
    
    if(string[0] == ' '){
        count--;
    }

    if(string[strlen(string)-2] == ' '){
        count--;
    }
    while(string[i] != '\n'){
        if(string[i] == ' '){
            count++;
        }
        i++;
    }
    printf("%d", count+1);
    free(string);
    return 0;
}