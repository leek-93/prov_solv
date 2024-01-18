#include<stdio.h>
int strStr(char* haystack, char* needle) {
    int flag, i=0, j=0;
    while(haystack[i]){
        if(needle[0] != haystack[i]){
        }else{
            flag = 0;
            while(needle[j]){
                if(needle[j] != haystack[i+j]){
                    flag = 1;
                }
                j++;
            }
            if(flag == 0){
                    return i;
                }
        } 
        i++;
    }
    return -1;
}

int main(){
    printf("%d", strStr("mississippi", "issip"));
    return 0;
}