#include<stdio.h>
#include<string.h>

int main()
{
      int a=10;
      int *p;
      p=&a;
      printf("address of a is %p",&a);
      printf("\naddress =%d and %p",p,p);
      printf("\naddress is %p",(void*)&a);
      printf("\ncontent at address is %d",*p);
}
