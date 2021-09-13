#include<stdio.h>
#include<Stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
void insert_at_beg(node *tail)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->next=NULL;
    newnode->next=tail->next;
    tail->next=newnode;
    tail=newnode;
    printf("%d",tail->next->data); 
    //display(tail);
}
node *insert_at_end(node *tail)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->next=NULL;
    newnode->next=tail->next;
    tail->next=newnode;
    tail=newnode;
    return tail;
}
void display(node *head,node *tail)
{
    node *temp;
    temp=head;
    while(temp!=tail)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void main()
{
    node *newnode,*tail=NULL;
    int choice=1;
    int count=0;
    while(choice)
    {
        newnode=(node*)malloc(sizeof(node));
        printf("enter the data : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(tail==NULL)
        {
            tail=newnode;
        }
        else
        {
            newnode->next=tail;
            tail->next=newnode;
            tail=newnode;
        }
        printf("do you want to continue (0,1) ? ");
        scanf("%d",&choice);
        count++;
    }
    insert_at_beg(tail);
    insert_at_end(tail);
    insert_at_pos(tail);
    display(tail,count);

    
}