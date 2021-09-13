#include<stdio.h>
#include<string.h>
struct employee
{
    int emp_id;
    int salary;
    char name[10];
    char designation[10];
};
int main()
{
    int i,j,n;
    char str[30];
    struct employee s[10];
    printf("enter the number of employee:");
    scanf("%d",&n);
    printf("enter the details of employee :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i].emp_id);
        fflush(stdin);
        gets(s[i].name);
        fflush(stdin);
        scanf("%d",&s[i].salary);
        fflush(stdin);
        gets(s[i].designation);
        fflush(stdin);
    }
    for(i=0;i<n;i++)
    {
        if(strcmp(s[i].designation,"manager")==0)
        {
            printf("%d\t %s\t",s[i].emp_id,s[i].name);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t %d\t %s\t %s\n",s[i].emp_id,s[i].salary,s[i].name,s[i].designation);
    }

    
}
