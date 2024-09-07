#include<stdio.h>
#include<string.h>
//3ms 
char* mergeAlternately(char* word1, char* word2){
    static char merged[1000];
    int i = 0;
    int k = 0;
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int minMergeLen = len1<len2? len1 : len2;

    //Merge one by one 
    for(i = 0; i<minMergeLen;i++){
        merged[k++] = word1[i];
        merged[k++] = word2[i];
    }

    //Merge the leftovers
    while (i < len1) merged[k++] = word1[i++];
    while (i < len2) merged[k++] = word2[i++];

    merged[k] = '\0';

    return merged;
}