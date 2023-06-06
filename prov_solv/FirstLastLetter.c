#include<stdio.h>
#include<string.h>
/*
P9086 take the number of cases and each cases as input
print first and last letters
*/
int main(){
    int num=0,j=0,k=0;
    char string[100];
    char result[32];
    scanf("%d", &num);

    for(int i=0; i<num;i++){
        scanf("%s", string);
        for(j=0; j<1000;j++){
            if(string[j+1] == 0){
                k=j;
                break;
            }
        }
        printf("%c%c\n", string[0], string[k]);
    }

    return 0;
}