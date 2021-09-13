#include<stdio.h>
struct  customer
{
    int   cust_id;
    char  cust_name[20];
    int   loan_amt;
    int   balance;
};
void main()
{
    int i,n,k;
    printf("Enter the number of customers : ");
    scanf("%d",&n);
    struct customer cu[50];
    for(i=0;i<n;i++)
    {
        printf("Enter the cust_id of %d customer\n",i+1);
        scanf("%d",&cu[i].cust_id);
        printf("Enter the cust_name of %d customer\n",i+1);
        fflush(stdin);
        gets(cu[i].cust_name);
        fflush(stdin);
        printf("Enter the loan_amt of %d customer\n",i+1);
        scanf("%d",&cu[i].loan_amt);
        printf("Enter the balance of %d customer\n",i+1);
        scanf("%d",&cu[i].balance);
        printf("\n");
    }
    
    char ans;
    do
    {
        printf("Enter the cust_id who want to get the loan:\n");
        scanf("%d",&k);
        for(i=0;i<n;i++)
        {
            if(k==cu[i].cust_id)
            { 
                if(cu[i].loan_amt<200000  && cu[i].balance>=100000)
                {
                    printf("\t\tLOAN PERMITTED TO %d\n\n",cu[i].cust_id);
                    break;
                }
                else
                { 
                    printf("\t\tLOAN NOT PERMITTED %d\n\n",cu[i].cust_id);
                    continue;
                }
            }        
        }
        fflush(stdin);
        printf("DO YOU WANT TO CONTINUE?(y/n)\n");
        scanf("%c",&ans);

    } while (ans=='y' || ans =='Y');
}
