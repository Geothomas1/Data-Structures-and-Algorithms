//Sort an array
//serrch perticular element in array

#include <stdio.h> 
   
int main()
{ 
    int i;
    int n,temp;
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
}
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
         temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        } 
    }
printf("Array elements:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
}


return 0;
}
