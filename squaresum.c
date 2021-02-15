/*  1 8 27 ...... N
*/
#include<stdio.h>
int main()
{
    int n,s,i;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=i*i*i;
        printf("%d\n",s);
    }
}