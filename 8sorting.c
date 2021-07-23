#include<stdio.h>
#include<stdlib.h>

void bubble(int[],int);
void selection(int[],int);
void insertion(int[],int);

int n,j,i,a[10];

void main()
{
int ch;

        while(1)
        {
                printf("\n1. Bubble\n");
                printf("2. Selection\n");
                printf("3. Insertion\n");
                printf("4. Exit\n");
                printf("Enter your choice:\n");
                scanf("%d",&ch);

                switch(ch)
                {
                        case 1: bubble(a,n);
                                break;
                        case 2: selection(a,n);
                                break;
                        case 3: insertion(a,n);
                                break;
                        case 4: exit(0);
                                break;
                        default:
                                printf("Invalid Choice:");
                                break;
                }
        }
}


void bubble(int a[],int n)
{
int i,temp;
int j;
        printf("Enter the size\n");
        scanf("%d",&n);
        printf("Enter the elements for Bubble sort:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
                for(j=0;j<n-1;j++)
                {
                        if(a[j]>a[j+1])
                        {
                                temp=a[j];

                               a[j]=a[j+1];
                                a[j+1]=temp;
                        }
                }
        }
        printf("Sorted Elements for Bubble Sort are:\n");
        for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}


void selection(int a[],int n)
{
        int i,j,temp,min;
        printf("Enter the size\n");
        scanf("%d",&n);
        printf("Enter the element for Selection Sort \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
                min=i;
                for(j=i+1;j<n;j++)
                {
                        if(a[i]>a[j])
                        {
                                min=j;
                                temp=a[i];
                             a[i]=a[j];
                                a[j]=temp;
                        }
                }
        }
        printf("Sorted Elements for Selection Sort are:\n");
        for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}


void insertion(int a[],int n)
{
int i,j,temp,key;
        printf("Enter the size\n");
        scanf("%d",&n);
        printf("Enter the Elements for Insertion sort\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++)
        {
                key=a[i];
                for(j=i-1;j>=0 && key<a[j];j--)
                {
                        a[j+1]=a[j];
                }
                a[j+1]=key;
        }
        printf("Sorted elements for Insertion sort are:\n");
        for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}


