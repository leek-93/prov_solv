#include<stdio.h>
/*
P 9498 scan the score and print grade according to grading scale
100-90 A
89-80 B
79-70 C
69-60 D
59- F
*/
int main(){
    int score;
    scanf("%d", &score);
    if(score >89){
        printf("A");
    } else if(score >79){
        printf("B");
    } else if(score >69){
        printf("C");
    } else if(score >59){
        printf("D");
    }else {
        printf("F");
    }
    return 0;
}