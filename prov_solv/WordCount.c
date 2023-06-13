#include<stdio.h>
#include<string.h>
/*
P1152 take a line of strings and print how many words are contained
*/
int main(){
    int count=0, i=0;
    char string[10000001];
    memset(string, 0, sizeof(char)*10000001);
    fgets(string, 10000001, stdin);
    if(string[0] == '\n'){
        count--;
    }
    if(string[strlen(string)] == ' '){
        count--;
    }

    while(string[i] != '\n'){
        if(string[i] == ' '){
            count++;
        }
        i++;
    }
    printf("%d", count+1);
    return 0;
}