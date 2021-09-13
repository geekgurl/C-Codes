#include<stdio.h>
int fact(int);
void main()
{
    int n,ans;
    printf("Enter number");
    scanf("%d",&n);
    ans = fact(n); //n=5
    printf("%d",ans);
} 
int fact(int num)
{
    if(num==1)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }
}
