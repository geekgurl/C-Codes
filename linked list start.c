#include<stdio.h>
#include<stdlib.h>
typedef struct nodes
{
    int data;
    struct node *next;
}node;
void main()
{
    node *head=NULL,*newnode=NULL,*temp=NULL;
    int choice=1,count=0;
    while(choice)
    {
        newnode=(node *)malloc(sizeof(node));
        printf("enter the data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL; 
        if(head==NULL)
        {
            head=temp=newnode; //1|newnode     2|NULL
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue (0,1) ? :");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("NULL");
    printf("\n%d",count);
}