#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;

NODE *head;

void display()
{
    if(head == NULL)
    {
        printf("The List is empty.... (Go For Option 1) ");
    }
    else
    {
        NODE *temp = (struct node *)malloc(sizeof(struct node));
        temp=head;
        do
        {
            printf("%d -> ",temp->data);
            temp=temp->next;
        }while(temp!=NULL);
        printf("NULL");
    }
}

void create_list(int dataa)
{
    head = (struct node *)malloc(sizeof(struct node));
    NODE *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=dataa;
    newnode->next=NULL;
    head=newnode;
    printf("\nList Created sucessfully with the first node as : %d",dataa);
}

void insert_at_beg(int dataa)
{
    if(head != NULL)
    {
        struct node *CUR = (struct node *)malloc(sizeof(struct node));
        CUR->data=dataa;
        CUR->next=head;
        head=CUR;
        printf("\nSucessfully inserted the node '%d' at the beginning",dataa);
        printf("\nThe updated list is : ");
        display();
    }
    else 
    {
        printf("\n\nThe List is Empty....");
    }

}

void insert_at_end(int data)
{
    if(head == NULL)
    {
        printf("\n\nThe list is Empty....");
    }
    else
    {
        NODE *cur = (struct node*)malloc(sizeof(struct node));
        cur = head;
        while(cur->next != NULL)
        {
            cur = cur->next;
        }
        NODE *newn = (struct node *)malloc(sizeof(struct node));
        newn->data=data;
        newn->next=NULL;
        cur->next=newn;
        printf("\nSucessfully inserted the node '%d' at the end",data);
        printf("\nThe updated list is : ");
        display();
    }
}

void insert_at_mid(int data,int value)
{
    if(head == NULL)
    {
        printf("\n\nThe list is Empty....");
    }
    else
    {
        NODE *cur = (struct node *)malloc(sizeof(struct node));
        cur = head;
        while(cur->data != value)
        {
            cur = cur->next;
        }
        NODE *newn = (struct node *)malloc(sizeof(struct node));
        newn->data=data;
        newn->next = cur->next;
        cur->next = newn;
        printf("\nSucessfully inserted the node '%d' after the element '%d",data,value);
        printf("\nThe updated list is : ");
        display();
    }
}

void delete_at_beg()
{
    if(head == NULL)
    {
        printf("The List is empty.... (Go For Option 1) ");
    }
    else
    {
        NODE *cur = head;
        printf("\nSucessfully deleted the node '%d' at the beginning",cur->data);
        head = cur->next;
        free(cur);
        printf("\nThe updated list is : ");
        display();
    }
}

void delete_at_end()
{
    if(head == NULL)    
    {
        printf("The List is empty.... (Go For Option 1) ");
    }
    else
    {
        NODE *cur = head;
        while(cur->next->next != NULL)
        {
            cur=cur->next;
        }
        if(cur->next->next == NULL)
        {
            NODE *next = cur->next;
            printf("\nSucessfully deleted the node '%d' at the end",next->data);
            cur->next=NULL;
            free(next);
            printf("\nThe updated list is : ");
            display();
        }
    }
}

void delete_at_mid(int value)
{
    if(head == NULL)
    {
        printf("The List is empty.... (Go For Option 1) ");
    }
    else
    {
        NODE *cur = head;
        while(cur->next->data != value)
        {
            cur=cur->next;
        }
        NODE *del = cur->next;
        printf("\nSucessfully deleted the node '%d' form the list ",value);
        cur->next=cur->next->next;
        free(del);
        printf("\nThe updated list is : ");
        display();
    }
}

int main()
{
    int option;
    int key;
    int data;
    printf("\nMENU");
    printf("\n\n1.Create a List ");
    printf("\n2.Insert at Beginning");
    printf("\n3.Insert at End");
    printf("\n4.Insert after given position");
    printf("\n5.Delete at beginnig ");
    printf("\n6.Delete at end ");
    printf("\n7.Delete after given position");
    printf("\n8.Display the list");
    printf("\n\nNOTE : USE ONLY NUMBERS FOR GIVING INPUT....");
    do
    {
        printf("\n\nEnter your option : ");
        scanf("%d",&option);
        switch (option)
        {
        case 1 :printf("Enter the value : ");
                scanf("%d",&data);
                create_list(data);
                break;
        case 2 :printf("Enter the value : ");
                scanf("%d",&data);
                insert_at_beg(data);
                break;
        case 3 :printf("Enter the value :");
                scanf("%d",&data);
                insert_at_end(data);
                break;
        case 4 :printf("Enter the key value to search :");
                scanf("%d",&key);
                printf("\nEnter the Value to insert after the given node :");
                scanf("%d",&data);
                insert_at_mid(data,key);
                break;
        case 5 :delete_at_beg();break;
        case 6 :delete_at_end();break;
        case 7 :printf("\n Enter the value to delete : ");
                scanf("%d",&data);
                delete_at_mid(data);
                break;
        case 8 :printf("\n\nThe List is : ");
                display();
                break;
        case 9 :exit(0);break;
        default:break;
        }
    }while(option<=9);
    getchar();
    return 0;
}