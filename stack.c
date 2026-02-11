#include<stdio.h>
#include<stdlib.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void peak();
void display();
int main()
{   
  top=-1;
    printf("Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("STACK OPERATIONS USING ARRAY\n");
    printf("\n\t-----------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");
    while(1)
    {
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peak();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
               printf("\n\t EXIT POINT ");

               exit(0);
            }
            default:
            {
                printf("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
        }
    }
    return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n\tSTACK is over flow");

}
else
{
printf(" Enter a value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("\n\t Stack is under flow");

}
else
{
printf("\n\t The popped elements is %d",stack[top]);
top--;
}
}
void peak()
{
if(top<=-1)
{
printf("\n\t Stack is under flow");
}
else
{
printf("\n\t The top most elements is %d",stack[top]);

}

}
void display()
{
if(top>=0)
{
printf("\n The elements in STACK \n");
for(i=top; i>=0; i--)
printf("\n%d",stack[i]);
printf("\n Press Next Choice");
}
else
{

printf("\n The STACK is empty");
}

}