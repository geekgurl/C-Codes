#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
void insert_at_beginning(node **head)
{
    node *temp=NULL,*newnode=NULL;
    temp=*head;
    newnode=(node*)malloc(sizeof(node));
    printf("enter the data to insert at beginning :");
    scanf("%d",&newnode->data);
    *head=newnode;
    newnode->next=temp;  //0->1->2->3->                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
}
void display(node *head)
{
    //printf("DIsplay %d",head->next->data);
    node *temp=NULL;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    } 
}
void main()
{
    node *newnode=NULL,*head=NULL,*temp=NULL;
    int choice=1,count=0;
    while(choice)
    {
        newnode=(node*)malloc(sizeof(node));
        printf("enter the data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;//head=100=temp=newnode
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue (0,1) ? ");
        scanf("%d",&choice);
        count++;
    }   //1->2->3->4->5
    insert_at_beginning(&head);
    //printf("head= %d",head->data);
    display(head);
}