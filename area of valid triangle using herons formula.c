#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,area,s=0;
    printf("enter the lenght of three sides:");
    scanf("%d %d %d",&a,&b,&c);
    if(a<(b+c) && b<(a+c) && c<(a+b))
    {
        printf("valid trianlge");
        s=(a+b+c)/2;//   11
        area=sqrt(s*(s-a)*(s-b)*(s-c));// 11*1*4*6
        printf("\nArea of valid triangle =%d",area);
        
    }
    else
    {
        printf("not a valid triangle");
    }
    
}