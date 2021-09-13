#include<Stdio.h>
#include<Stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}node;
node *insert_at_beg(node *head,node *tail)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("enter the data to insert at beg :");
    scanf("%d",&newnode->data);
    newnode->next=head;
    newnode->prev=tail;
    head->prev=newnode;
    tail->next=newnode;
    head=newnode;
    return head;
}
node *insert_at_end(node *head,node *tail)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("enter the data in newnode to insert at end :");
    scanf("%d",&newnode->data);
    newnode->prev=tail;
    newnode->next=head;
    tail->next=newnode;
    head->prev=newnode;
    tail=newnode;
    return tail;
}
void insert_at_pos(node *head,int count)
{
    int pos,i=1;
    printf("enter the position :");
    scanf("%d",&pos);
    node *newnode,*temp;
    temp=head;
    if(pos>count || pos<1)
    {
        printf("invalid position n!!");
    }
    else
    {
        newnode=(node*)malloc(sizeof(node));
        printf("enter the data you want to insert  :");
        scanf("%d",&newnode->data);
        while (i<(pos-1))
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next->prev=newnode;
        temp->next=newnode;
    }
}
void main()
{
    node *head=NULL,*newnode,*tail,*temp;
    int choice=1,count=0,choose;
    while(choice)
    {
        newnode=(node*)malloc(sizeof(node));
        printf("enter data :");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=tail=newnode;
            head->next=head;
            head->prev=head;
        }
        else
        {
            newnode->prev=tail;
            tail->next=newnode;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;
        }
        printf("do you want to continue (0,1) ? ");
        scanf("%d",&choice);
        count++;
    }
    printf("%d",count);
    insert_at_pos(head,count);
    temp=head;
    while(temp!=tail)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",tail->data);

}