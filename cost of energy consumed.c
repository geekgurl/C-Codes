#include<stdio.h>
void main()
{
   float a,COST;
   printf("enter the units consumed:");
   scanf("%f",&a);
   printf("ONE UNIT ENERGY=RUPEES 5\n");
   COST=a*5;
   printf("the total cost of energy consumed is %f",COST);
}