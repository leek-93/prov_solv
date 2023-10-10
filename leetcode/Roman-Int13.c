#include<stdio.h>

int romanToInt(char * s){
    int num =0;
    while(*s != 0){
        if(*s == 'I' && (*(s+1) == 'V' || *(s+1) == 'X')){
            num -= 1;
        } else if(*s == 'X' && (*(s+1) == 'L' || *(s+1) == 'C')){
            num -= 10;
        } else if(*s == 'C' && (*(s+1) == 'D' || *(s+1) == 'M')){
            num -= 100;
        } else if(*s == 'M'){
            num += 1000;
        } else if(*s == 'D'){
            num += 500;
        } else if(*s == 'C'){
            num += 100;
        } else if(*s == 'L'){
            num += 50;
        } else if(*s == 'X'){
            num += 10;
        } else if(*s == 'V'){
            num += 5;
        } else if(*s == 'I'){
            num += 1;
        }
        *s++;
    }

    return num;
}

int main(){
    char *s ="MCMXCIV";
    printf("%d", romanToInt(s));

    return 0;
}