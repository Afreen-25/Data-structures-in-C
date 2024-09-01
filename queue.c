#include<stdio.h>
#define MAX 10

int q[MAX];
int front=-1, rear=-1;
void insert();
void delete();
void peek();
void display();
int main()
{
    int choice, num;
    do
    {
        printf("\n1. insert element");
        printf("\n2. delete element");
        printf("\n3. peek element");
        printf("\n4. display element");
        printf("\n5. exit");
        printf("\nenter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5: printf("exit") ;
                    break;
        }
        }while (choice!=5);
    
        return 0;
}

void insert()
{
    int num;
    printf("\nenter number to be inserted: ");
    scanf("%d", &num);
    if(rear==MAX-1)
    printf("\n overflow!!");
    else if(front==-1 && rear==-1)
    front=rear=0;
    else
    rear++;
    q[rear]=num;
}
void delete()
{
    int d;
    if(front==-1 || front<rear)
    printf("\n underflow!!");
    else 
    d=q[front];
    front++;
}
void peek()
{
    if(front==-1 || front>rear)
        printf("\n queue is empty");
        else 
        printf("\element at front is: %d", q[front]);
    }
void display()
{
    int i;
    if(front==-1 || front>rear)
    printf("\n queue is empty");
    else
    {
        for(i=front;i<=rear;i++)
        printf("\t %d", q[i]);
    }
}
    

