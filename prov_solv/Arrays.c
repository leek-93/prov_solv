#include<stdio.h>
/*
P10810 take the number of baskets and balls with numbers(index)
each basket can store one ball
next lines tells where the ball goes and ball with number
return the number on the ball in each basket at the end 
*/

int main(){
    int n, m, numberBall, start, end;
    scanf("%d %d", &n, &m);
    int arr[100] = {0,};

    for(int i=0;i<m;i++){
        scanf("%d %d %d\n", &start, &end, &numberBall);
        for(int j=start; j=end; j++){
            arr[j] = numberBall;
        }
    }

    for(int i=0; i<m;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}