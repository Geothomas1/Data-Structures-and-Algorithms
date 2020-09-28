//serrch perticular element in array

#include <stdio.h> 
   
int main()
{ 
    int i,ele,f=0,pos;
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
}
    printf("Enter the Element:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
            if(a[i]==ele)
{
    f=1;
    pos=i;
}
    }
    if(f==1)
    {
        printf("Element found at pos %d",pos);
    }else
    {
        printf("Element not found");
    }
    

    


}