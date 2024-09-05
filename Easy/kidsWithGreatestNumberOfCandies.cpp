#include<stdio.h>
#include<stdlib.h>
#include<math.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    bool *result = (bool*)malloc(candiesSize * sizeof(bool));
    *returnSize = candiesSize;

    int temp = 0;

    for(int i = 0; i<candiesSize;i++){
        temp = candies[i] + extraCandies;
        for(int j = 0;j<candiesSize;j++){
            if(temp < candies[j]){
                result[i] = false;
                break;
            }
            result[i] = true;
        }
    }
    return result;
}