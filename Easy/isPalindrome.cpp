#include<stdio.h>
#include<string.h>
int isPalindrome(char str[]){
    int l = 0;
    int r = strlen(str)-1;

    //Check from both front and the back
    while(l<r){
        if(str[l] != str[r]){
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

int main(){
    char word1[] = "abba";
    char word2[] = "asba";

    printf("%d", isPalindrome(word1));
    printf("%d", isPalindrome(word2));
}