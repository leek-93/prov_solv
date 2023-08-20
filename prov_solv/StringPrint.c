#include<stdio.h>
#include<string.h>
/*
P11718 take string upto 100 lines and print them
*/
int main(){
    int flag=0;
    char input[101];
    memset(input, 1 , 101);

    while(scanf("%[^\n]s", &input) != EOF){
        printf("%s\n", input);
        
        getchar();
    }

    return 0;
}