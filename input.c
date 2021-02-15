#include<stdio.h>
void main()
{
    int n,a,sum,diffrence;
    float b,c,sum1,diffrence1;

    scanf("%d %d",&n,&a);
    scanf("%f %f",&b,&c);
    sum=n+a;
    diffrence=n-a;
    sum1=b+c;
    diffrence1=b-c;
    printf("%d %d\n",sum,diffrence);
    printf("%0.1f %0.1f",sum1,diffrence1);

}
