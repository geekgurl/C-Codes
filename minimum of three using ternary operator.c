#include<stdio.h>
void main()
{
    int a,b,c;
    char min;
    printf("enter the elements:");
    scanf("%d %d %d",&a,&b,&c);
    min=(a<b)?((a<c)?'a':'c'):((b<c)?'b':'c');
    printf("minimum of three is %c",min);
}