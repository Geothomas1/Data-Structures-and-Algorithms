//Stack using Array
#include<stdio.h>
int max=10;
int top=0;
int stack[10];
void pushs();
void pops();
int k;
char c;
    
int main()
{
   
printf("Enter Your Choice 1 for push  / 2 for pop");
   scanf("%d",&k);

   do
   { 
   switch(k)
   {
       case 1:pushs();
              break;
       case 2:pops();
              break; 
       default:printf("You are enter worng input:");
               break;
        y
   } 
   printf("do you want to continue:");
   scanf("%s",&c);
   }while (c =='y');
   
}
   
   void pushs()
   {
       if(top==max)
    {
        printf("Stack is Full !!!");
    }else
    {
        int new;
        printf("Enter the New Stack Element:");
        scanf("%d",&new);
        stack[top]=new;
        top=top+1;
        printf("Stack Elements Are:");
        for(int i=0;i<top;i++)
        {
            printf("%d",stack[i]);
        }
    }

}
void pops()
{
    printf("Haii");
}