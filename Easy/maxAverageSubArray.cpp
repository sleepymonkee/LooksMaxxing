#include<stdio.h>
double average(int* nums, int numSize, int k){
    //if the length is smaller than k, which k must be bigger than the length as stated
    if(k > numSize){
        return -1;
    };
    double sum=0;

    //Sum the first k numbers
    for(int i =0;i<k;i++){
        sum += nums[i];
    };

    double maxSum = sum;

    //Sliding Window, keep replacing the first array number with the last array 
    for(int j=k;j<numSize;k++){
        sum = sum - nums[j-k] + nums[j];
        if(maxSum < sum){
            maxSum = sum; 
        };
    };
    return maxSum/k;

}