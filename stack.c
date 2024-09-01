#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 20
int main(){

    int st[MAX];
    int top=-1;
    void push(int, int);
    void peek();
    void pop();
    void display();
    int val,option;
    do{
        printf("MAIN MENU");
        printf("\n 1. push");
        printf("\n 2. peek");
        printf("\n 3. pop");
        printf("\n 4. display");
        printf("\n enter option");
        scanf("%d", &option);
        switch(option)
        {
            case 1: printf("\n enter the no to be pushed");
            scanf("%d", &val);
            push(st, val);
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            case 4: display();
            break;
            case 5: printf("\n exit");
            break;
        }}
        while(option!=5);
        return 0;
    
}

void push(int st[], val)
{
    if(top==MAX-1){
        printf("\nstack overflow");
    }
    else{
        st[++top]=val;
    }
}

void pop(){
    int val;
    if(top==-1)
    {
        printf("\n stack underflow");
    }
    else{
        val=st[top];
        top--;
        printf("\n no to be deleted is: %d", val);

    }
}

void peek(){
    if(top==-1)
    {
        printf("\n stack empty");
    }
    else{
        printf("\n element to be peeked is: %d", st[top]);
    }
}

void display(){
    int i;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else{
        for(i=top; i>=0; i--)
        {
            printf("\n %d", st[i]);
            printf("\n");
        } 
        }
    }
    









        
        


    
    

