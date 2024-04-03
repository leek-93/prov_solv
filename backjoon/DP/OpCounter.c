/*
1463 given an integer between 1 and 1000000, find the smallest count that it
    operates among the following
    1. divid n by 3 if possible
    2. divid n by 2 if possible
    3. otherwise, substract n by 1
*/

#include<stdio.h>

int dp[1000001];
int min(int a, int b){
    return a<b?a:b;
}
int main(){
    int num=0;
    scanf("%d", &num);
    for(int i=2; i<=num; i++){
        dp[i] = dp[i-1]+1;
        if(i % 3 == 0) dp[i] = min(dp[i], dp[i/3]+1);
        if(i % 2 == 0) dp[i] = min(dp[i], dp[i/2]+1);
    }

    printf("%d", dp[num]);
    return 0;
} 