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
   do
   { 
    printf("Enter Your Choice:\n");
    printf("1:PUSH\n");
    printf("2:POP\n");
    scanf("%d",&k);
   switch(k)
   {
       case 1:pushs();
              break;
       case 2:pops();
              break; 
       default:printf("You are enter worng input:");
               break;
        
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
            printf("%d\t",stack[i]);
        }
    }

}
void pops()
{
    int topelemt;
   if(top==0)
   {
       printf("<<<<<<Stack Underflow>>>>>>");
   }else{

topelemt=stack[top];
top-=1;
if(top!=0)
{
printf("Stack Elements Are:");
        for(int i=0;i<top;i++)
        {
            printf("%d\t",stack[i]);
        }

   }else
   {
       printf("----There is no element in stack-----");
   }
   
}
}