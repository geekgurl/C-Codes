/*
0<=a,b,c<n 
a^3+b^2==c^2
2,1,3
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,b,c;
    scanf("%d",&n);
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            for(int c=0;c<n;c++)
            {
                if((pow(a,3)+pow(b,2))==pow(c,2) && a!=b && a!=c && b!=c)
                {
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    }
}