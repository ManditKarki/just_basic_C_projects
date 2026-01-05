#include <Stdio.h>
int main()
{
char operation;
double num1;
double num2;
double result;
printf("Enter any operation:'+-*/:'");
scanf("%c", &operation);
printf("Enter your number1:");
scanf("%lf", &num1);
printf("Enter your number2: ");
scanf("%lf", &num2);

switch(operation){
    case'+':
    result =num1+num2;
    printf("%lf",result);
    break;
    case'-':
    result =num1-num2;
    printf("%lf",result);
     break;
    case'*':
    result =num1*num2;
    printf("%lf",result);
     break;
    case'/':
    result =num1/num2;
    printf("%lf",result);
     break;
    default:
    printf("%c it is not valid operator", operation);
     break;
    return 0;
}






}