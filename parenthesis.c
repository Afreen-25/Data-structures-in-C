#include<stdio.h>
#include<string.h>
#define MAX 10
int top=-1;
int st[MAX];
void push(char c);
char pop();
int main(){
    char exp[MAX],temp;
    int i,flag=1;
    printf("enter expression: ");
    gets(exp);
    for(i=0; i<strlen(exp); i++){
        if(exp[i]=='('|| exp[i]=='{' || exp[i]=='[')
        push(exp[i]);
     if(exp[i]==')'|| exp[i]=='}' || exp[i]==']')//bracket has to be popped
     if(top==-1)
     flag=0;
     else{
        temp=pop();
        if(exp[i]==')' && (temp=='{' || temp=='['))
        flag=0;
        if(exp[i]=='}' && (temp=='(' || temp=='['))
        flag=0;
        if(exp[i]==']' && (temp=='{' || temp=='('))
        flag=0;
          
     }   
    }
    if(top>=0)
    flag=0;
    if(flag==1)
    printf("valid exp");
    else 
    printf("invalid");
    return 0;
}
void push(char c){
    if(top==MAX-1)
    printf("\n overflow");
    else
    st[++top]=c;
}
char pop(){
    if(st[top]==-1)
    printf("\n underflow");
    else
    return(st[top--]);

}