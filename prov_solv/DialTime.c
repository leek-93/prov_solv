#include<stdio.h>
#include<string.h>
/*
P5622 Take upper cased string and calculate total time
1 to 9, each number represent 3 alphabet letters
1 takes 2 seconds to dial, 2 takes 3 seconds...
*/

int main(){
    char input[16];
    int temp=0, num=0, i=0;
    memset(input, '0', 16);

    scanf("%s", input);
    
    while(input[i+1] != '0'){
        num += (input[i] - 64)/3;
        i++;
    }
    printf("%d", num+6);

    return 0;
}