#include<stdio.h>
#include<string.h>
/*
P5622 Take upper cased string and calculate total time
1 to 9, each number represent alphabet letters
2 ABC 3 DEF 4 GHI 5 JKL 6 MNO 7 PWRS 8 TUV 9 WXYZ
1 takes 2 seconds to dial, 2 takes 3 seconds...
*/

int main(){
    char input[16], alphabet[26] ={2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
    int temp=0, sec=0, i=0;
    memset(input, 0, 16);

    scanf("%s", input);
    
    while(input[i] != 0){
        sec += alphabet[input[i] - 65] + 1;
        i++;
    }
    printf("%d", sec);

    return 0;
}