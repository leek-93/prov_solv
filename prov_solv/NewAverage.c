#include<stdio.h>
/*
P1546 take the number of exam scores and exam scores
return new average
*/

int main(){
    int numExam=0, highest=0;
    double total=0;
    double avg=0;
    scanf("%d", &numExam);
    double scores[numExam+1];
    for(int i=0; i<numExam; i++){
        scanf("%lf", &scores[i]);
        if(highest < scores[i]){
            highest = scores[i];
        }
    }

    for(int i=0; i<numExam; i++){
        total += (scores[i]*100)/highest;
    }

    avg = total/numExam;
    printf("%lf", avg);

    return 0;
}