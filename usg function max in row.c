#include<stdio.h>
#include<math.h>
#define max(a,b) a>b?a:b
void main()
{
    int i,j,n,m,a[10][10],y;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("\n%d",&a[i][j]);
        }
    }
    int maxs;
    for(i=0;i<n;i++)
    {    
        maxs=0;                                         
        for(j=0;j<m;j++)
        {
           maxs=max(maxs,a[i][j]);
        }
        printf("%d",maxs);
    }
}