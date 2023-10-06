#include<stdio.h>
/*
P11021 take number of test cases and run cases with loop
*/

int main(){
    int t;
    scanf("%d",&t);
    int a[t], b[t];
    for(int i=0; i<t;i++){
        scanf("%d %d", &a[i], &b[i]);
    }
    for(int i=0; i<t;i++){
        printf("Case #%d: %d + %d = %d\n", i+1,a[i], b[i], a[i]+b[i]);
    }
    return 0;
}