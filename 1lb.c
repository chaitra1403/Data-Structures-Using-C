#include<stdio.h>
#include<stdlib.h>
void linear(int[],int,int);
void binary(int[],int,int);
void main()
{
        int a[5],i,n,x,c;
	while(1)
	{
	printf("*******SEARCHING USING LINEAR AND BINARY********\n");
        printf("Enter the technique to use for searching:\n 1.LINEAR SEARCH \n 2.BINARY SEARCH\n 3.EXIT\n");
	printf("Enter your choice:\n");
        scanf("%d",&c);
	switch(c)
	{
	case 1:printf("Enter the size af array: ");
	        scanf("%d",&n);
        	printf("enter the array elements:");
        	for(i=0;i<n;i++)
        	{
        	        scanf("%d",&a[i]);
        	}
        	printf("Enter the element to be searched:");
        	scanf("%d",&x); 
		linear(a,x,n);
		break;
	case 2: printf("Enter the size af array: ");
        	scanf("%d",&n);
        	printf("enter the array elements:");
        	for(i=0;i<n;i++)
        	{
                scanf("%d",&a[i]);
        	}
        	printf("Enter the element to be searched:");
	        scanf("%d",&x); 
		binary(a,x,n);
		break;
	case 3:exit(0);
	default:printf("Invalid choice:\n");
		break;
        }
	}
}
void  linear(int a[5],int x,int n)
{
        int i,f=0;
        for(i=0;i<n;i++)
        {
                if(a[i]==x)
                {
                        printf("element found at %d\n",i);
                        f=1;
                        break;
                }
        }
        if(f==0)
        printf("element not found\n");
}
void binary(int a[10],int x,int n)
{
        int mid,low=0,high=n-1,f=0;
        while(low<=high)
        {
                mid=(low+high)/2;
                if(x==a[mid])
                {
                        printf("Element found at %d\n",mid);
                        f=1;
                        break;
                }
                if(x<a[mid])
                {
                        high=mid-1;
                }
                else
                {
                        low=mid+1;
                }
        }
        if(f==0)
        printf("Element not found\n");
}

