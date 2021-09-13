#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
void display(node *head,node *temp)
{
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp->next!=head);
    
}
void main()
{
    int choice;
    node *head=NULL,*temp,*newnode;
    while(choice)
    {
        newnode=(node*)malloc(sizeof(node));
        printf("enter the data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
            
        }
        newnode->next=head;
        printf("do you want to continue (0,1) ? ");
        scanf("%d",&choice);
    }
    display(head,temp);
}