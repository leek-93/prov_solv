#include<stdio.h>
#include<stdbool.h>

bool isValid(char * s){
    bool ret = false;
    char last[8] = {0,};
    int i=0, j=0, cntA = 0, cntB=0, cntC=0;
    if((s[0] == ')' && s[0] == ']' && s[0] == '}') || 
        (s[strlen(s)] == '(' && s[strlen(s)] == '[' && s[strlen(s)] == '{')){
        return false;        
    }
    while(s[i] != 0){
        if(s[i] == '('){
            if(cntB < 0 || cntC < 0){
                return false;
            }
            cntA++;
            last[j] = 'A';
            j++;
        }
        if(s[i] == ')'){
            if(last[j] != 'A'){
                return false;
            }
            cntA--;
            j--;
        }
        if(s[i] == '['){
            if(cntA < 0 || cntC < 0){
                return false;
            }
            cntB++;
            last[j] = 'B';
            j++;
        }
        if(s[i] == ']'){
            if(last[j] != 'B'){
                return false;
            } 
            cntB--;
            j--;
        }
        if(s[i] == '{'){
            if(cntB < 0 || cntA < 0){
                return false;
            }
            cntC++;
            last[j] = 'C';
            j++;
        }
        if(s[i] == '}'){
            if(last[j] != 'C'){
                return false;
            }
            cntC--;
            j--;
        }
        i++;
    }

    if(cntA == 0 && cntB == 0 && cntC == 0){
        return true;
    }
    return ret;
}

int main(){
    char *s = "()";
    printf("%d",isValid(s));

    return 0;
}