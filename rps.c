#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<stdbool.h>
#include <string.h>
// we use define so rand number can be be said as rock or paper
#define ROCK 1
#define paper 2
#define Scissiors 3
int main(){
char player[100];

int ai_1;
srand(time(NULL));
ai_1 =(rand()%3)+1;
printf("Enter Your Sign Rock paper Scissiors\n");
printf("1.Rock\n2.Paper\n2.Scissiors");








return 0;
}
