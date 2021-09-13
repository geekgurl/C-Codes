#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j,r;
    printf("Enter the number which you want to use for further operations");
    scanf("%d",&n);
    for(j=1;j<=8;j++)
    {
        int a[10]={0},smlnum=0,larnum=0,k=1,count=0;
        while(n!=0) //5423
        {
            r=n%10;
            a[r]++;
            n=n/10;
        }
        for(i=0;i<10;i++)
        {
            printf("%d\t",a[i]);
        }
        //for smallest number
        for(i=9;i>=1;i--)
        {
            if(a[i]==1)
            {
                smlnum=smlnum+k*i;
                k=k*10;
            }
        }
        printf("\nsmallest = %d\n",smlnum);
        //for largest number
        k=1;
        for(i=1;i<10;i++)
        {
            if(a[i]==1)
            {
                larnum=larnum+k*i;
                k=k*10;
            }
        }
        if(a[0]==1)
        {
            larnum=larnum*10;
        }
        printf("largest = %d\n",larnum);
        n =larnum-smlnum;
        printf("number = %d\n",n);
    }
    printf("n == %d",n);

}