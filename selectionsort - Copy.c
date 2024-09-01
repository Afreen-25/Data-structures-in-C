#include<stdio.h>
void main()
{

int a[5],i,j,s,p;
for(i=0;i<5;i++){
printf("Enter numbers: ");
scanf("%d",&a[i]);
}


printf("\nunSorted Array: \n");
for(i=0;i<5;i++)
{
printf("%d ",a[i]);
}
//Selection Sorting
for(i=0;i<5;i++)
{

s=a[i]; //s=24 i=1
p=i;    //p=1
for(j=i+1;j<5;j++)
{
if(a[j]<s)  //5<24 
{
s=a[j];  //s=5 
p=j;     //3  
}
}
a[p]=a[i];
a[i]=s;
}
printf("\nSorted Array: \n");
for(i=0;i<5;i++)
{
printf("%d ",a[i]);
}
}
