#include<stdio.h>
void main()
{
    float a,b,l,z;
    printf("enter number:");
    scanf("%f %f",&a,&b);
    if(a>b)
    {
      l=a/b;
      printf("the value is %f",l);
     
    }
    else if(b>a)
    {
        z=b/a;
        printf("the value of division is %f",z);
      
    }  
    else
    {
     printf("division is zero");
    }
    

    
}