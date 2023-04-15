#include<stdio.h>
/*
P 25304 Take total expense and number of items and each items' price and numbers
return if sum of item prices are matching with total, Yes
otherwise, No

for example,
260000
4
20000 5
30000 2
10000 6
5000 8

*/
int main(){
    int x,n,a,b;
    int sum = 0;
    scanf("%d %d", &x, &n);

    for(int i =0; i<n;i++){
        scanf("%d %d", &a, &b);
        sum += a*b;
    }
    if(x == sum){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}