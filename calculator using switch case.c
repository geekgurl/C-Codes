#include<stdio.h>
void main()
{
    float num1,num2;
    char operator;
    printf("enter the operator:");
    scanf("%c",&operator);
    printf("enter the value of num1 & num2:");
    scanf("%d %d",&num1,&num2);
    switch(operator)
    {
        case'+':printf("%f",num1+num2);
        break;
        case'-':printf("%f",num1-num2);
        break;
        case'*':printf("%f",num1*num2);
        break;
        case'/':printf("%f",num1/num2);
        break;
        default:printf("error wrong operator");
        break;
    }
}