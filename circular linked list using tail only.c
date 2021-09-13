#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
void dispaly(node *tail)
{
    node *temp;
    temp=tail->next;
    do
    {
        printf("%d",temp->data);
        temp=temp->next;
    }while(temp->next!=tail->next);
}
void main()
{
    int choice=1;
    node *tail=NULL,*temp,*newnode;
    while(choice)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
    {
        newnode=(node*)malloc(sizeof(node));
        scanf("%d",&newnode->next);
        if(tail==NULL)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        printf("do you want to continue (0,1) ? ");
        scanf("%d",&choice);
    }
    display(tail);
}