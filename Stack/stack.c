//Stack using Array
#include<stdio.h>
int max=10;
int top=-1;
int stack[max];
    
int main()
{
   char cho[10];
   char c;

   do
   {
   printf("Enter Your Choice push/pop");
   scanf("%s",&cho);
      
   swith(cho)
   {
       case "push":push();
                   break;
       case "pop":pop();
                  break; 
       default:print("You are enter worng input:")
               break;
        
   } 
   }while (c=='y');
}
   
   void push()
   {
       if(top==max)
    {
        printf("Stack is Full !!!");
    }else
    {
        int new;
        printf("Enter the New Stack Element:");
        scanf("$d",&new);
        stack[top]=new;
        top=top+1;
        printf("Stack Elements Are:");
        for(i=0;i<top;i++)
        {
            print("%d",stack[i]);
        }
    }

}