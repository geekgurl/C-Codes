#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *newnode,*temp;
void insert_at_end(node *head,int count)
{
    temp=head;
    int i=0;
    newnode=(node*)malloc(sizeof(node));
    printf("enter the data you want to insert at the end :");
    scanf("%d",&newnode->data);
    while(temp->next!=NULL)
    {
        printf("l");
        temp=temp->next;
    }
    printf("g");
    temp->next=newnode;//1->2->3->4->5->6->NULL
    printf("h");
    newnode->next=NULL;
    printf("i");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void main()
{
    int choice=1,count=0;
    node *head=NULL;
    while(choice)
    {
        newnode=(node*)malloc(sizeof(node));
        printf("enter the data :");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue (0,1) ? ");
        scanf("%d",&choice);
        count++;
    }
    insert_at_end(head,count);
}