#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f,*f1;
    int count=0,i,num;
    char c;
    f=fopen("E:\\temp.txt","w");
    if(f==NULL)
    {
        printf("file error");
        exit(1);
    }
    else
    {
        scanf("%d",&num);
        putw(num,f);
    }
    fclose(f);
    f=fopen("E:\\temp.txt","w");
    f1=fopen("E:\\prime.txt","w");
    if(f==NULL || f1==NULL)
    {
        printf("file error");
        exit(1);
    }
    else
    {
        num = getw(f);
        printf("%d\n",num);
        for ( i = 0; i < num; i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
        
    }
    fclose(f);
    fclose(f1);

}