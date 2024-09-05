#include<stdio.h>
double average(int* nums, int numSize, int k){
    
    if(k > numSize){
        return -1;
    };
    double sum=0;

    for(int i =0;i<k;i++){
        sum += nums[i];
    };

    double maxSum = sum;

    for(int j=k;j<numSize;k++){
        sum = sum - nums[j-k] + nums[j];
        if(maxSum < sum){
            maxSum = sum; 
        };
    };
    return maxSum/k;

}