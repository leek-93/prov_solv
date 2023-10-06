#include<stdio.h>
#include<math.h>
#include<string.h>
/*
P2745 given number and base, change it to decimal number
*/

int main(){
    int base=0, sum=0;
    char num[37]={0,};
    scanf("%s %d", &num, &base);

    for(int i=0; i<strlen(num); i++){
        if(num[i]>10){
            sum += (num[i]-54)*pow(base, strlen(num)-i);
        }else{
            sum += num[i]*pow(base, strlen(num)-i);
        }
    }

    printf("%lf", sum);
    return 0;
}