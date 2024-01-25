int lengthOfLastWord(char* s) {
    int idx=0, cnt=0;
    for(int i=0; i<strlen(s); i++){
        if(s[i] == ' ' && s[i+1] != NULL && s[i+1] != ' ' && idx != i){
            idx = i;
        }
    }
    for(int j=idx; j<strlen(s);j++){
        if(s[j] != ' '){
            cnt++;
        }
    }

    return cnt;
}