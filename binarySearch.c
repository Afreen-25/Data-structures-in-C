34
#include<stdio.h>

int main()
{
  int arr[10];
  int num;
  int i,flag=0,p;
  int beg,mid,end;

   for(i=0;i<10;i++)
   {
    printf("enter element in array :");
    scanf("%d",&arr[i]);

   }
printf("Array \n");
   for(i=0;i<10;i++)
   {
    printf(" %d  ",arr[i]);
      
   }
    printf("\nenter number to be search :");
    scanf("%d",&num);
    beg=0;
    end=9;
    while (beg<=end)
    {
        mid=(beg+end)/2;
        if(arr[mid]==num)
        {
            flag=1;
            p=mid;
            break;
        }
        else if (arr[mid]<num)
        beg=mid+1;
        else
        end=mid-1;
    }
      if(flag==1)
       printf("\n%d found  : at postition %d",num,p);
    else
    printf("\nnumber not found ");

}