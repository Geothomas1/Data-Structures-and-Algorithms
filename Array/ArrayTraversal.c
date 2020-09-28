#include <stdio.h> 
int main()
{ 
    int n;
    printf("Enter the Size of Array:");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
   return 0;

}