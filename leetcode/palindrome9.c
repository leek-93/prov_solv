#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x){
    int reversed =0, prev =0;
    int num = x;

    if(x < 0){
        x = -x;
        return false;
    }

    while(x != 0){
        int prev = x%10;
        x /= 10;
        if(reversed>2147483647/10 || reversed == 2147483647/10 && prev > 7) return 0;

        reversed = reversed*10 + prev;
    }
    
    if(num == reversed) return true;
    else return false;
}

int main(){
    int x=1000000001;
    
    printf("%s", isPalindrome(x)? "true":"false");
    return 0;
}