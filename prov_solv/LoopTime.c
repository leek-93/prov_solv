#include<stdio.h>
/*
P15552 take number of test cases and run cases with loop
*/

int main(){
    int t;
    scanf("%d",&t);
    int a[t], b[t];
    for(int i=0; i<t;i++){
        scanf("%d %d", &a[i], &b[i]);
    }
    for(int i=0; i<t;i++){
        printf("%d\n", a[i]+b[i]);
    }
    return 0;
}