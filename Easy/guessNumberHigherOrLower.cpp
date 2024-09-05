#include<stdio.h>

int guess(int num);

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){
    if(guess(n) == 0){return n;}; 
    int l = 1;
    int r = n;
    int m = l+(r-l)/2;
    int res = 0;

    while(true){
        m = l+(r-l)/2;
        res = guess(m);
        if(res > 0){
            l = m + 1;
        }else if(res < 0){
            r = m - 1;
        }else{
            return m;
        }
    }
}