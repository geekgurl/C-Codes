#include<stdio.h>
#include<string.h>
typedef struct student
{
    int roll;
    char name[20];
    int marks;
}st[20];
void main()
{
    int i,j,n,temp,yemp;
    char str[20];
    struct student s[20];
    printf("enter the number of stuents :");
    scanf("%d",&n);
    printf("enter the details of students :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i].roll);
        fflush(stdin);
        gets(s[i].name);
        fflush(stdin);
        scanf("%d",&s[i].marks);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(s[i].marks<s[i+1].marks)
            {
                temp=s[i].marks;
                s[i].marks=s[i+1].marks;
                s[i+1].marks=temp;

                strcpy(str,s[i].name);
                strcpy(s[i].name,s[i+1].name);
                strcpy(s[i+1].name,str);

                yemp=s[i].roll;
                s[i].roll=s[i+1].roll;
                s[i+1].roll=yemp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("roll no.\t  name\t  marks \n   %d\t  %s\t  %d\n",s[i].roll,s[i].name,s[i].marks);
    }
}