#include<stdio.h>

#define MAX 10
int st[MAX];
int top=-1;
int pop();
void push(int);
int main()
{
    int val,i,n;
    int a[10];
    printf("\n enter no of elements: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        printf("\n enter element: ");
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
        push(a[i]);
    for(i=0; i<n; i++){
        val=pop(); //popped element from top is stored in val and printed in reversed order
        a[i]=val;
    }        
    printf("\n reversed array is: ");
    for(i=0; i<n; i++)
    printf("\n %d", a[i]);
    getche();
    return 0;
}
void push(int val){
    st[++top]=val;
}
int pop(){
    return(st[top--]);

}

   
    
    

