#include<ctype.h>
#include<stdio.h>
int stack[20];
int top = -1;
 
void push(int x)
{
        stack[++top] = x;

}
 
int pop()
{
        return stack[top--];

}

int main()
{
        char exp[20];
        char *e;
        int n1,n2,n3,num;
        printf("Enter the expression :: ");
        scanf("%s",exp);
        e = exp;
        while(*e != '\0')
        {
                if(isdigit(*e))
                {
                        num = *e - 48;
                        push(num);
                }
                else
                {
                        n1 = pop();
                        n2 = pop();
                        switch(*e)
                        {
                                case '+':
                                {
                                        n3 = n2+ n1;
		                        break;
                                }
                                case '-':
                                {
                                        n3 = n2 - n1;
                                        break;
                                }
                                case '*':
                                {
                                        n3 = n2 * n1;
                                        break;
                                }
                                case '/':
                                {
                                        n3 = n2 / n1;
                                        break;
                                }
				case '$':
				{
					int i;
					for(i=1;i<n1;i++)
					{
					n2=n2*n2;
					}
					n3=n2;
					break;
				}
                        }
			//printf("%d\t",n3);

                        push(n3);

                }
                e++;

        }
	if(top==0)
		printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
	else
		printf("invalid");

        return 0;
 
}
