#include<stdio.h>
struct student
{
    int roll;
    char name[30];
    int marks;
};
int main()
{
    int i,n;
    struct student st[50];
    char str[30];
    struct student *p;
    p=st;
    printf("enter the number of students :");
    scanf("%d",&n);
    printf("eneter the details of each student :");
    for(i=0;i<n;i++)
    {
        printf("roll\tname\tmarks");
        scanf("%d",&(p+i)->roll);
        fflush(stdin);
        gets((p+i)->name);
        fflush(stdin);
        scanf("%d",&(p+i)->marks);
    }
    printf("\records are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\n",(p+i)->roll,(p+i)->name,(p+i)->marks);
    }

}
