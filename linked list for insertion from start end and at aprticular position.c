#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data ;
    struct node *next;
}node;
void main()
{
    node *head=NULL,*newnode=NULL,*temp=NULL;
    int n;
    printf("enter the number you want to input :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
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
    }
    int pos,i=1;
    node *newin=NULL;
    newin=(node*)malloc(sizeof(node));
    printf("enter the position to insert the data :");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("INVALID POSITION !!");
    }
    else
    {
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        printf("enter the data :");
        scanf("%d",&newin->data);
        newin->next=temp->next;
        temp->next=newin;
    } 
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }   
}