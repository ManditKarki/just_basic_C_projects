#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
srand(time(NULL));
int min =50;
int max =100;

int randomNumber = rand() % 3;// we can add min and max number
    // int randomNum1 = (rand() % (max - min + 1)) + min; this will generate random nbr from 50 to 100
printf("%d", randomNumber);

// Pseudo-random = Appear random but are determined by a 
    //                                 mathematical formula that uses a seed value 
    //                                 to generate a predictable sequence of numbers.
    //                                 advanced: Mersenne Twister or /dev/random


    return 0; 
}