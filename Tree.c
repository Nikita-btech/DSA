#include<stdio.h>
#include<stdlib.h>
struct Tree{
    int data;
    struct Tree *lchild;
    struct Tree *rchild;
};
struct Tree* create()
{
    struct Tree* newnode=(struct Tree*)malloc(sizeof(struct Tree));
    int x;
    printf("Enter the data of node(-1 if no node):");
    scanf("%d",&x);
    if(x==-1)
    {
        return NULL;
    }
    
        newnode->data=x;
        printf("Enter left child of %d\n",x);
        newnode->lchild=create();
         printf("Enter right child of %d\n",x);
        newnode->rchild=create();
    
    return newnode;
}
void main()
{
    struct Tree* root;
    root=0;
    root=create();

}