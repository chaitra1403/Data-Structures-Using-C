#include<stdio.h>
#include<stdlib.h>
#define MAX 4
void insert(int n);
void del();
int display();
int front=-1;
int rear=-1;
int queue[MAX];
void check(int n);
void main()
{
        int n,ch;
        while(1)
        {
                printf("\n1:Insert\n");
                printf("2:Delete\n");
                printf("3:Display\n");
                printf("4:Exit\n");
                printf("\nEnter choice:");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:printf("\nEnter element to be inserted:");
                                scanf("%d",&n);
                                insert(n);
                                break;
                        case 2:del();
                                break;
                        case 3:display();
                                break;
                        case 4:exit(0);
                        default:printf("Invalid choice");
                                break;
                }
        }
}
void insert(int data)
{
        if(rear>=MAX-1)
        {
                printf("\nQueue is full\n");
                return;
        }
        if((front==-1)&&(rear==-1))
        {
                front++;
                rear++;
                queue[rear]=data;
                return;
        }
        else
	{
                check(data);
                rear++;
	}
}
void check(int data)
{
        int i,j;
        for(i=0;i<=rear;i++)
        {
                if(data>=queue[i])
                {
                        for(j=rear+1;j>i;j--)
                        {
                                queue[j]=queue[j-1];
                        }
                        queue[i]=data;
                        return;
                }
        }
        queue[i]=data;
}
void del()
{
        if((front==-1)||(front>rear))
        {
                printf("\nQueue is empty\n");
        }
        else
        {
                printf("\nElement deleted is=%d",queue[front]);
                front=front+1;
        }
}
int display()
{
        int i;
        if((front==-1)||(front>rear))
        {
                printf("Queue is empty\n");
        }
        else
        {
                printf("Elements are\n");
                for(i=front;i<=rear;i++)
                printf("%d\n",queue[i]);
        }
}



