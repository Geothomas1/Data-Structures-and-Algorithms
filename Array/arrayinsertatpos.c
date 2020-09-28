
#include <stdio.h> 
   
int main()
{ 
    int i,pos,j,ele;
    printf("Enter the pos:");
    scanf("%d",&pos);
    printf("Enter the Element:");
    scanf("%d",&ele);
    int a[5]={1,2,3,4,5};  
    for(i=5;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=ele;

    printf("Array Elements are:");
    for(i=0;i<=5;i++)
    {
        printf("%d",a[i]);
    }
   return 0;

}