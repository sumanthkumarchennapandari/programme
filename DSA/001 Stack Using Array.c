// Stack using array 
 
#include<stdio.h>
#define SIZE 2
int arr[SIZE];
int top = -1;

void PUSH(int data)
{
    ++top;
    if(top>=SIZE)
    {
        printf("\n\nStack Overflow...(Stack Is Full) ");
    }
    else
    {
        arr[top]=data;
        printf("\n\nThe element '%d' has been sucessfully pushed into the stack",data);
    }
}

void POP()
{
    if(top == -1)
    {
        printf("\n\nStack Underflow...(No elements to pop from the stack)");
    }
    else
    {
        printf("\n\nThe element '%d' has been poped from the stack ",arr[top]);
        top--;
    }
}

void display()
{
    if(top == -1)
    {
        printf("\n\nThe Stack is empty...[There are no elements to print]");
    }
    else
    {
        int temp = top;
        while(temp <= SIZE && temp > -1)
        {
            printf("\n[\t%d\t]",arr[temp]);
            temp--;
        }
    }
}

main()
{
    int option,item;
    printf("\n\nMENU");
    printf("\n1.Push into the stack ");
    printf("\n2.Pop from the stack ");
    printf("\n3.Print the stack ");
    printf("\n5.Exit");
    do
    {
        printf("\n\nEnter your choice : ");
        scanf("%d",&option);
        switch(option)
        {
            case 1: printf("\nEnter the item to be pushed : ");
                    scanf("%d",&item);
                    PUSH(item);
                    break;
            case 2: POP();
                    break;
            case 3: display();
                    break;
            default:break;
        }
    }while(option<4);
    getchar();
}