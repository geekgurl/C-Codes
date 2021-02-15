#include<stdio.h>
void main()
{
    float BS,DA,HRA,TA,GROSS_SALARY;
    printf("ENTER THE VALUES BS:");
    scanf("%f",&BS);
    DA=30.0/100*BS;
    HRA=20.0/100*BS;
    TA=10.0/100*BS;
    GROSS_SALARY=BS+DA+HRA+TA;
    printf("THE GROSS SALARY IS %f",GROSS_SALARY);
}