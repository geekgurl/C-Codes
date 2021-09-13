#include<Stdio.h>
#include<Stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}node;
void insert_at_beg(node *head)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("enter the data you want to insert :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_at_end(node *temp)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("enter the data you want to insert at end :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
}
void insert_at_pos(node *head,int count)
{
    int pos,i=1;
    node *newnode,*temp;
    temp=head;
    printf("enter the position you wnat to insert data :");
    scanf("%d",&pos);
    if(pos>count || pos < count)
    {
        printf("invalid position!!! ");
    }
    else
    {
        newnode=(node*)malloc(sizeof(node));
        printf("enter the data you wnat to insert at position :");
        scanf("%d",&newnode->data);
        while(i<(pos-1))
        {
            temp=temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void main()
{
    int choice=1,count=0;
    node *head=NULL,*temp,*newnode,*pre;
    while(choice)
    {
        newnode=(node*)malloc(sizeof(node));
        printf("enter the data :");
        scanf("%d",&newnode->next);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("do you want to continue (0,1) ? ");
        scanf("%d",&choice);
        count++;
    }
}