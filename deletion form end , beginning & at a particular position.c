#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
void display(node *head)
{
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
node *delete_form_beginning(node *head,int count)
{
    node *temp;
    temp=head;
    head=head->next;
    free(temp);
    return head;
}
void delete_from_end(node *head,int count)
{
    node *temp,*newnode;
    temp=newnode=head;
    while(temp->next->next!=NULL)//1->2->3->4->NULL->NULL;
    {
        temp=temp->next;
    }
    newnode=temp->next;
    free(newnode);
    temp->next=NULL;
}
void delete_From_particular_pos(node *head,int count)
{
    node *newnode,*temp;
    temp=newnode=head;
    int pos;
    int i=1;
    printf("Enter the position where you want to delete\n");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("INVALID");
    }
    else
    {
        while(i<(pos))
        {
            newnode=temp;
            temp=temp->next; 
            i++;                                                                                                                                                                            
        }
        newnode->next=temp->next;
        free(temp);
    }
}
void main()
{
    int count=0,choice=1;
    node *head=NULL;
    node *newnode,*temp;
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
        temp->next=NULL;
        printf("do you want to continue (0,1)? :");
        scanf("%d",&choice);
        count++;
    }
    display(head);
    printf("\nEnter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:head=delete_form_beginning(head,count);
            break;
        case 2:delete_From_particular_pos(head,count);
            break;
        case 3:delete_from_end(head,count);
    }
    display(head);
    count--;
}
