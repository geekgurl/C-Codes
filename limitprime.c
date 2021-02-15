#include<stdio.h>
void main()
{
    int i,m=1,l,r,j;

    printf("Enter the left limit and the right limit");
    scanf("%d %d",&l,&r);// 2  7

    for(i=l;i<=r;i++)// i=4 i<=7 i++
    {
        m=1;
        for(j=2;j<i;j++)// j=2 j<5 j++
        {
            if(i%j==0)
            {
                m=i%j;//m=0
            }   
        }
        if(m!=0)
        {
            printf("%d\t",i);
        }
    }
}