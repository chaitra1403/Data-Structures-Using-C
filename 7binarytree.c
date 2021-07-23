#include<stdio.h>
#include<stdlib.h>
struct node
        {
        int data;
        struct node *lchild;
        struct node *rchild;
        }*root=NULL,*temp,*parent,*current,*q;
void insert();
void inorder(struct node *q);
void preorder(struct node *q);
void postorder(struct node *q);
void main()
{
        int ch;
        while(1)
                {
                printf("\n1.Insert\n2.Inorder\n3.Preorder\n4.Postorder\n5.Exit\n");
                printf("Enter your choice : ");
                scanf("%d",&ch);
                switch(ch)
                        {
                        case 1:insert();
                                break;
                        case 2:printf("\nInorder");
                                inorder(root);
                                break;
                        case 3:printf("\nPreorder");
                                preorder(root);
                                break;
                        case 4:printf("\nPostorder");
                                postorder(root);
                                break;
                        case 5:exit(1);
                                break;
                        default : printf("\nInvalid choice\n");
                        } 
                } 
} 

void insert()
{
        temp=(struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d",&temp->data);
        temp->lchild=NULL;
        temp->rchild=NULL;
        if(root==NULL)
                root=temp;
        else
                {
                parent=root;
                current=root;
                while(current)
                        {
                        parent=current;
                        if(temp->data>current->data)
                                current=current->rchild;
                        else
                                current=current->lchild;
                        }
                if(temp->data>parent->data)
                        parent->rchild=temp;
                else
                        parent->lchild=temp;
                }
}
void inorder(struct node *q)
{
        if(root==NULL)
                printf("\nBinary Search is Empty\n");
	else

	{
        if(q->lchild!=NULL)
                inorder(q->lchild);

        printf("%d->\t",q->data);

        if(q->rchild!=NULL)
                inorder(q->rchild);

}
}

void preorder(struct node *q)
{
        if(root==NULL)
                printf("\nBST Empty\n");
else
{
        printf("%d->\t",q->data);

        if(q->lchild!=NULL)
                preorder(q->lchild);

        if(q->rchild!=NULL)
                preorder(q->rchild);
}
}
void postorder(struct node *q)
{
        if(root==NULL)
                printf("\nBST Empty\n");
else
{
        if(q->lchild!=NULL)
                postorder(q->lchild);

        if(q->rchild!=NULL)
                postorder(q->rchild);

        printf("%d->\t",q->data);
}
}



