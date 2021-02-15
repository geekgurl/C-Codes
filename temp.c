#include<stdio.h>
#include<math.h>//format specifier of double is :lf
void main()
{
    double a,b,ans;
    scanf("%lf %lf",&a,&b);

    ans=pow(a,b);

    printf("%lf",ans);
}
