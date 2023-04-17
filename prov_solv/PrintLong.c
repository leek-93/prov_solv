#include<stdio.h>
/*
P 25314 
*/
int main(){
    int n;
    char typeLong[5] ="long";
    scanf("%d", &n);
    do{
        printf("%s ", typeLong);
        n = n-4;
    }while(n-4>=0);
    printf("int");
    return 0;
}