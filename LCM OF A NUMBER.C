#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,lcm,i;
   printf("enter two numbers:");
    scanf("%d%d",&a,&b);//15 30     30          6 4     12
   if(a>b)
   {
       lcm=a;
   }
   else
   {
       lcm=b;
   }
   while(1)
    {
        if(lcm%a==0 && lcm%b==0)
        {
           break;
        }
        lcm++;
    }    
    printf(" lcm is %d",lcm);  

    
      


  
   
}
