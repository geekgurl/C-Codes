#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}node;
node *reverse(node *head)
{
    node *temp=NULL,*newnode=NULL,*preve=NULL;
    temp=head;
    while(newnode!=NULL)
    {
        newnode=temp->next;
        temp->next=preve;
        preve=temp;
        temp=newnode;
    }
    head=preve;
    cout << endl;
    return head;
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
int main()
{
    node *head=NULL,*temp,*newnode;
    int choice=1,count=0;
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
    display(head);
    cout << endl; //1->2->3->4->5
    head=reverse(head);
    display(head);
}