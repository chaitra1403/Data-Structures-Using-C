#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<ctype.h>
char stack[20][20];
int top=-1,size;

void push();
void pop();
void peek();
void display();

void main()
{

int ch,n;
printf("enter the limit\n");
scanf("%d",&size);

do
        {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.display\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
                case 1:
                        push();
                        break;
                case 2:
                        pop();
                        break;
                case 3:
                        peek();
                        break;
                case 4:
                        display();
                        break;
                default:exit(0);
                        break;
        }
        printf("do  you want to continue 1/0\n");
        scanf("%d",&n);
        }
        while(n!=0);
}

void push()
{
char item[20];
        if(top==size-1)
        {
                printf("stack is full\n");
        }
        else
        {
         printf("enter the string\n");
         scanf("%s",item);
        top++;
        strcpy(stack[top],item);
        }
}

void pop()
{
        if(top==-1)
        {
                printf("stack is empty\n");
        }
        else
        {
                printf("popped element is: %s \n",stack[top]);
                top--;
        }
}


void peek()
{
        if(top==-1)
        {
                printf("stack is empty\n");
        }
        else
        {
                printf("peeked element is: %s \n",stack[top]);
        }
}

void display()
{

int i;
        if(top==-1)
        {
                printf("stack is empty\n");
        }
        else
        {
                for( i=top;i>-1;i--)
                printf("stack elements are: %s  \n",stack[i]);
        }
}


