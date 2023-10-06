#include<stdio.h>
/*
P10952 take number of test cases and run cases with loop
*/

int main(){
    int a[128] = {};
    int b[128] = {};
    int i = 0;
    while(i<128){
        scanf("%d %d", &a[i], &b[i]);
        if(a[i] == 0 && b[i] == 0){
            break;
        }
        printf("%d\n", a[i]+b[i]);
        i++;
    }
    return 0;
}