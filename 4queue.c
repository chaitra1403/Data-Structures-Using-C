#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void insert();
void Delete();
void display();

int size,front=-1,rear=-1;
char q[20][20];


void main()
{
int ch;

        printf("Enter the limit: ");
        scanf("%d",&size);

        while(1)
        {

                printf("\n1. insert\n");
                printf("2. delete\n");
                printf("3. display\n");
                printf("4. exit\n");
                printf("enter your choice:  ");
                scanf("%d",&ch);

                switch(ch)
                {

                        case 1:
                                insert();
                                break;
                        case 2:
                                Delete();
                                break;

                        case 3:
                                display();
                                break;
                        case 4:
                                exit(0);
                                break;
                        default: printf("enter valid option\n");
                }
        }
}


void insert()
{
char item[20];

        if(rear==size-1)
        {
                printf("Q is full\n");
        }
        else
        {
                printf("\n insert the element  ");
                scanf("%s",item);
                strcpy(q[++rear],item);
                if (front==-1)
                {
                        front=0;
                }
        }
}

void Delete()
{
        if(front==-1)
        {
                printf("Q is empty\n");
        }
        else
        {
                printf("\n deleted element is %s ",q[front]);
                front+=1;
                if(front>rear)
                {
                        front=-1;
                }
        }
}

void display()
{       int i;
        if(front==-1)
        {
                printf("Q is Empty\n");
        }
        else
        {
                printf("\nthe elements in queue are");
                for(i=front;i<=rear;i++)
                {
                        printf("\n%s",q[i]);
                }
        }
}



