#include<stdio.h>
void main()
{
    int a,r,sum=0,temp;
    printf("enter number:");
    scanf("%d",&a);
    temp=a; //temp=121 a=121
    while(a>0)
    {
        r=a%10;//1//2//1 apna r mai 1 aagya na thik
        sum=(sum*10)+r; //1//12 ab sum mai 12 tha toh 12*10+ r mai 1 aaya thatoh (12*10+1=121  haa ye aagyayes
        a=a/10; //a=12//a=1 ab dekh a= 1/10 hoga na yo  ha toh a mai kya aagya 0 ha ab 0 aagya a mai aur sum mai tha 121 toh
    }
     printf("the palindrome number of a given number is %d\n",sum);
     if(temp==sum) //kya hai yeh
     {
         printf("given number is palindrome number\n");
     }
     else
     {
        printf("not a palindrome number");
     }
     
}