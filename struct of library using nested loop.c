#include<stdio.h>
#include<string.h>
struct library_for_books
{
    int book_id;
    char name[20];
    struct publisher
    {
        int cost;
        int year;
    }p;
};
int main()
{
    int i,j,n;
    struct library_for_books l[20];
    printf("enter the number of books :");
    scanf("%d",&n);
    printf("enter the details of book ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&l[i].book_id);
        printf("%d  ",l[i].book_id);
        fflush(stdin);
        fgets(l[i].name,30,stdin);
        printf("%d  ",l[i].name);
        scanf("%d",&l[i].p.cost);
        printf("%d  ",l[i].p.cost);
        scanf("%d",&l[i].p.year);
        printf("%d  ",l[i].p.year);
    }
    for(i=0;i<n;i++)
    {
        if((strcmp(l[i].name,"capstone")==0) && l[i].p.year==2020)
        {
            printf("book_id\t name\n  %d   %s\n",l[i].book_id,l[i].name);
        }
    }/*
    for(i=0;i<n;i++)
    {
        printf("book_id\t name\n  %d   %s\n",l[i].book_id,l[i].name);
    }*/
}