#include<stdio.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    char *prefix = "";
    char temp = ' ';
    int i=0;
    int j=0;

    for(i=0; i< strsSize; i++){
        for(j=1; j<strsSize; j++){
            if(strs[j][i] != strs[0][i]){
                strs[0][i] = 0;
                return strs[0];
            }
        }
    }
    return NULL;
}

int main(){
    char *strs[3] = {"flower","flow","flight"};

    printf("%s", longestCommonPrefix(strs, 3));

    return 0;
}