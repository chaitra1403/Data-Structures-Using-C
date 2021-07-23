#include<stdio.h>
#include<stdlib.h>
#define MAX 15
int a[20][20],i,j,n,v[MAX],f=0,r=-1,in;
int push(int item)
{
        if(r == MAX-1)
                printf("queue is full\n");
        else
        {
                v[++r] = item;
        }
return 0;
}
int pop()
{
        int a;
        if(f == -1 || f>r)
                printf("queue is underflow\n");
        else
        {
                 a = v[f++];
                printf("\n%d ",a);
                return a;
        }
}
int isempty()
{
        if(f==-1 || f>r)
                return 1;
        else
                return 0;
}
void bfs(int s)
{
        int i;
        push(s);
        v[s] = 1;
        while(!isempty())
        {
                int k = pop();
                for(i=1; i<=n; i++)
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
        bfs(in);
        return 0;
}

