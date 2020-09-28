
#include <stdio.h> 
   
int main()
{ 
    int i,pos;
    printf("Enter the pos:");
    scanf("%d",&pos);
    int a[5]={1,2,3,4,5};  
    for(i=pos;i<5;i++)
    {
        a[i]=a[i+1];
    }

    printf("Array Elements are:");
    for(i=0;i<5-1;i++)
    {
        printf("%d",a[i]);
    }
   return 0;

}