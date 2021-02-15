#include<stdio.h>
#include<math.h>
void main()
{
   float a,b,c,d,i,r1,c1,z1;
  
    printf("enter the values of a,b ad c:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    d=(b*b)-(4*a*c);//36-32=4 d=4
    if(sqrt(d)<0)
    {
        d=(sqrt(d));
        printf("%fi",d);

        r1=(-b/(2*a));
        c1=(d/(2*a));
        printf("%0.2f+%0.2fi",r1,c1);
        printf("%0.2f-%0.2fi",r1,c1);
      
    }
    else if(sqrt(d)==0)
    {
        r1=(-b/(2*a));
        printf("%0.2f",r1);
    }
    else
    {
        d=(sqrt(d));//d=2
        r1=(-b/(2*a));
        c1=(d/(2*a));
        printf("%0.2f+%0.2f\n",r1,c1);
        printf("%0.2f-%0.2f\n",r1,c1);
    }
    
    

}
//1 6 8