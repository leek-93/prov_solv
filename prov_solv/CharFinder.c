#include<stdio.h>
#include<string.h>
/*
P27866 take a word and an index number
return the character that comes at the index number
*/
int main(){
    int num=0, i=0;
    char str[1024];
    
    while(str[i-1] != '\n'){
        scanf("%c", &str[i]);
        i++;
    }
    
    scanf("%d", &num);
    printf("%c", str[num-1]);
    return 0;
}