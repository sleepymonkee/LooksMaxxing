#include<stdio.h>
#include<string.h>
bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int tmp=0;
    int i;
    for(i=0; i<flowerbedSize-1; i++){
        if(flowerbed[i]==0 && tmp==0 && flowerbed[i+1]==0){
            n--;
            tmp=1;
        }
        else tmp=flowerbed[i];
    }//

    if(flowerbed[i]==0 && tmp==0) n--;

    return n<=0;
}