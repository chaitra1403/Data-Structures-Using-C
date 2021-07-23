#include<stdio.h>
#include<stdlib.h>
#define MAX 15
int a[20][20],i,j,n,v[MAX],top=-1,in;
int push(int item)
{
        if(top == MAX-1)
                printf("stack is full\n");
        else
        {
                v[++top] = item;
        }
return 0;
}

int pop()
{
        int a;
        if(top == -1)
                printf("stack is underflow\n");
        else
        {
                 a = v[top--];
                printf("\n%d ",a);
                return a;
        }
}
int isempty()
{
        if(top==-1)
                return 1;
        else
                return 0;
}
void dfs(int s)
{
        int i;
        push(s);
        v[s] = 1;
        while(!isempty())
        {
                int k = pop();
                for(i=1;i<=n;i++)
                if(! (!a[k][i]) && (!v[i]) )
                {
                        push(i);
                        v[i]=1;
                }
        }
}
int main()
{
        int i,j;
        printf("enter the number of vertices\n");
        scanf("%d",&n);
        printf("enter the starting vertex\n");
        scanf("%d",&in);
        printf("enter the adjacency matrix\n");
        for(i=1; i<=n; i++)
        {
                for(j=1; j<=n; j++)
                {
                        scanf("%d ",&a[i][j]);
                }
        }
        printf("adjacency matrix is\n");
        for(i=1; i<=n; i++)
        {
                for(j=1; j<=n; j++)
                {
                        printf("%d ",a[i][j]);
                }
        printf("\n");
        }
        dfs(in);
        return 0;
}
